#include <fstream>

#include "lesamnta.h"
const int ROUND = 20;

const int P[8] = {4, 5, 2, 3, 0, 1, 6, 7};

int main() {
    ofstream ofs;
    string fileName = "R20.txt";
    ofs.open(fileName.c_str());
    int trial = 0;
    for (int xpos = 0; xpos < BLOCK_SIZE; xpos++) {
        for (int ypos = 0; ypos < BLOCK_SIZE; ypos++) {
            try {
                GRBEnv env     = GRBEnv();
                GRBModel model = GRBModel(env);

                vector<vector<GRBVar>> in_div(ROUND + 1,
                                              vector<GRBVar>(BLOCK_SIZE));
                vector<vector<GRBVar>> out_div(ROUND,
                                               vector<GRBVar>(BLOCK_SIZE));

                vector<vector<GRBVar>> x0(ROUND, vector<GRBVar>(STATE_SIZE));
                vector<vector<GRBVar>> x1(ROUND, vector<GRBVar>(STATE_SIZE));
                vector<vector<GRBVar>> x2(ROUND, vector<GRBVar>(STATE_SIZE));
                vector<vector<GRBVar>> x3(ROUND, vector<GRBVar>(STATE_SIZE));

                vector<vector<GRBVar>> cpy_nr(ROUND,
                                              vector<GRBVar>(STATE_SIZE));
                vector<vector<GRBVar>> cpy_rf(ROUND,
                                              vector<GRBVar>(STATE_SIZE));
                vector<vector<GRBVar>> xor_out(ROUND,
                                               vector<GRBVar>(STATE_SIZE));

                vector<vector<GRBVar>> t0(ROUND, vector<GRBVar>(NM));
                vector<vector<GRBVar>> in_Q0(ROUND,
                                             vector<GRBVar>(STATE_SIZE / 2));
                vector<vector<GRBVar>> sb_Q0(ROUND,
                                             vector<GRBVar>(STATE_SIZE / 2));
                vector<vector<GRBVar>> mc_Q0(ROUND,
                                             vector<GRBVar>(STATE_SIZE / 2));

                vector<vector<GRBVar>> t1(ROUND, vector<GRBVar>(NM));
                vector<vector<GRBVar>> in_Q1(ROUND,
                                             vector<GRBVar>(STATE_SIZE / 2));
                vector<vector<GRBVar>> sb_Q1(ROUND,
                                             vector<GRBVar>(STATE_SIZE / 2));
                vector<vector<GRBVar>> mc_Q1(ROUND,
                                             vector<GRBVar>(STATE_SIZE / 2));

                vector<vector<GRBVar>> in_R(ROUND, vector<GRBVar>(STATE_SIZE));
                vector<vector<GRBVar>> out_R(ROUND, vector<GRBVar>(STATE_SIZE));

                // initialize valuables
                for (int r = 0; r < ROUND; r++) {
                    for (int i = 0; i < BLOCK_SIZE; i++) {
                        in_div[r][i] = model.addVar(0, 1, 0, GRB_BINARY);
                    }
                    for (int j = 0; j < STATE_SIZE; j++) {
                        x0[r][j]      = model.addVar(0, 1, 0, GRB_BINARY);
                        x1[r][j]      = model.addVar(0, 1, 0, GRB_BINARY);
                        x2[r][j]      = model.addVar(0, 1, 0, GRB_BINARY);
                        x3[r][j]      = model.addVar(0, 1, 0, GRB_BINARY);
                        cpy_nr[r][j]  = model.addVar(0, 1, 0, GRB_BINARY);
                        cpy_rf[r][j]  = model.addVar(0, 1, 0, GRB_BINARY);
                        xor_out[r][j] = model.addVar(0, 1, 0, GRB_BINARY);
                        in_R[r][j]    = model.addVar(0, 1, 0, GRB_BINARY);
                        out_R[r][j]   = model.addVar(0, 1, 0, GRB_BINARY);
                    }
                    for (int i = 0; i < NM; i++) {
                        t0[r][i] = model.addVar(0, 1, 0, GRB_BINARY);
                        t1[r][i] = model.addVar(0, 1, 0, GRB_BINARY);
                    }

                    for (int k = 0; k < STATE_SIZE / 2; k++) {
                        in_Q0[r][k] = model.addVar(0, 1, 0, GRB_BINARY);
                        sb_Q0[r][k] = model.addVar(0, 1, 0, GRB_BINARY);
                        mc_Q0[r][k] = model.addVar(0, 1, 0, GRB_BINARY);

                        in_Q1[r][k] = model.addVar(0, 1, 0, GRB_BINARY);
                        sb_Q1[r][k] = model.addVar(0, 1, 0, GRB_BINARY);
                        mc_Q1[r][k] = model.addVar(0, 1, 0, GRB_BINARY);
                    }
                }

                for (int i = 0; i < BLOCK_SIZE; i++) {
                    in_div[ROUND][i] = model.addVar(0, 1, 0, GRB_BINARY);
                }

                // input constraints
                for (int i = 0; i < BLOCK_SIZE; i++) {
                    if (i == xpos) {
                        model.addConstr(in_div[0][i] == 0);
                    } else {
                        model.addConstr(in_div[0][i] == 1);
                    }
                }

                /*

                for (int i = 0; i < STATE_SIZE * 3; i++) {
                    model.addConstr(in_div[0][i] == 0);
                }
                for (int i = STATE_SIZE * 3; i < BLOCK_SIZE; i++) {
                    model.addConstr(in_div[0][i] == 1);
                }
                */

                // encryption constraints
                for (int r = 0; r < ROUND; r++) {
                    // divide
                    for (int i = 0; i < STATE_SIZE; i++) {
                        model.addConstr(in_div[r][i] == x0[r][i]);
                        model.addConstr(in_div[r][i + STATE_SIZE] == x1[r][i]);
                        model.addConstr(in_div[r][i + 2 * STATE_SIZE] ==
                                        x2[r][i]);
                        model.addConstr(in_div[r][i + 3 * STATE_SIZE] ==
                                        x3[r][i]);
                    }

                    // copy
                    copy_constr(model, x2, cpy_nr, cpy_rf, r);

                    for (int i = 0; i < STATE_SIZE / 2; i++) {
                        model.addConstr(cpy_rf[r][i] == in_Q0[r][i]);
                        model.addConstr(cpy_rf[r][i + STATE_SIZE / 2] ==
                                        in_Q1[r][i]);
                    }
                    SubBytesConstr(model, in_Q0, sb_Q0, r);
                    MixColumnsConstr(model, sb_Q0, mc_Q0, t0, r);

                    SubBytesConstr(model, in_Q1, sb_Q1, r);
                    MixColumnsConstr(model, sb_Q1, mc_Q1, t1, r);

                    for (int i = 0; i < STATE_SIZE / 2; i++) {
                        model.addConstr(in_R[r][i] == mc_Q0[r][i]);
                        model.addConstr(in_R[r][i + STATE_SIZE / 2] ==
                                        mc_Q1[r][i]);
                    }

                    for (int i = 0; i < 8; i++) {
                        for (int j = 0; j < 8; j++) {
                            model.addConstr(in_R[r][8 * P[i] + j] ==
                                            out_R[r][8 * i + j]);
                        }
                    }

                    xor_constr(model, out_R, x3, xor_out, r);

                    for (int i = 0; i < STATE_SIZE; i++) {
                        model.addConstr(in_div[r + 1][i] == xor_out[r][i]);
                        model.addConstr(in_div[r + 1][i + STATE_SIZE] ==
                                        x0[r][i]);
                        model.addConstr(in_div[r + 1][i + STATE_SIZE * 2] ==
                                        x1[r][i]);
                        model.addConstr(in_div[r + 1][i + STATE_SIZE * 3] ==
                                        cpy_nr[r][i]);
                    }
                }

                for (int i = 0; i < BLOCK_SIZE; i++) {
                    if (i == ypos) {
                        model.addConstr(in_div[ROUND][i] == 1);
                    } else {
                        model.addConstr(in_div[ROUND][i] == 0);
                    }
                }

                /*
                            GRBLinExpr sum = 0;
                            for (int i = 0; i < BLOCK_SIZE; i++) {
                                sum += in_div[ROUND][i];
                            }

                            model.setObjective(sum, GRB_MINIMIZE);
                */
                model.optimize();

                if (model.get(GRB_IntAttr_Status) == 3) {
                    ofs << "[Input] index of 0 : " << xpos << endl;
                    ofs << "BALANCE : " << ypos << endl;
                } /* else {
                    for (int r = 0; r < ROUND; r++) {
                        ofs << "ROUND " << r << " ======= " << endl;
                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(x0[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";

                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(x1[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";

                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(x2[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";

                        for (int i = 0; i < STATE_SIZE; i++) {
                            if (i == (STATE_SIZE / 2)) ofs << " ";
                            ofs << abs(x3[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << endl;

                        for (int i = 0; i < STATE_SIZE * 3 + 3; i++) ofs << " ";
                        for (int i = 0; i < STATE_SIZE / 2; i++) {
                            ofs << abs(in_Q0[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";
                        for (int i = 0; i < STATE_SIZE / 2; i++) {
                            ofs << abs(in_Q1[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << endl;

                        for (int i = 0; i < STATE_SIZE * 3 + 3; i++) ofs << " ";
                        for (int i = 0; i < STATE_SIZE / 2; i++) {
                            ofs << abs(sb_Q0[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";
                        for (int i = 0; i < STATE_SIZE / 2; i++) {
                            ofs << abs(sb_Q1[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << endl;

                        for (int i = 0; i < STATE_SIZE * 3 + 3; i++) ofs << " ";
                        for (int i = 0; i < STATE_SIZE / 2; i++) {
                            ofs << abs(mc_Q0[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";
                        for (int i = 0; i < STATE_SIZE / 2; i++) {
                            ofs << abs(mc_Q1[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << endl;

                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(xor_out[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";

                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(x0[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";

                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(x1[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << " ";

                        for (int i = 0; i < STATE_SIZE; i++) {
                            ofs << abs(cpy_nr[r][i].get(GRB_DoubleAttr_X));
                        }
                        ofs << endl;
                        ofs << endl;
                        ofs << endl;
                    }
                } */
            } catch (GRBException e) {
                cout << "Error code = " << e.getErrorCode() << endl;
            } catch (...) {
                cout << "Exception during optimization" << endl;
            }
            //}  while (next_permutation(idx, idx + 128));
            trial++;
        }
        ofs << " ==================== " << endl;
    }

    ofs.close();
    return 0;
    //    }
}

