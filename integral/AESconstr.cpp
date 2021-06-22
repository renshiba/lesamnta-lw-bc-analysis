#include "lesamnta.h"

void SubBytesConstr(GRBModel& model, vector<vector<GRBVar>>& in,
                    vector<vector<GRBVar>>& afterSB, int r) {
    for (int b = 0; b < 32; b += 8) {
        model.addConstr(+1 * in[r][0 + b] + 1 * in[r][1 + b] +
                            1 * in[r][2 + b] + 1 * in[r][3 + b] +
                            41 * in[r][4 + b] + 1 * in[r][5 + b] +
                            1 * in[r][6 + b] + 1 * in[r][7 + b] -
                            6 * afterSB[r][0 + b] - 7 * afterSB[r][1 + b] -
                            7 * afterSB[r][2 + b] - 6 * afterSB[r][3 + b] -
                            7 * afterSB[r][4 + b] - 7 * afterSB[r][5 + b] -
                            7 * afterSB[r][6 + b] - 7 * afterSB[r][7 + b] >=
                        -6);
        model.addConstr(+1 * in[r][0 + b] + 1 * in[r][1 + b] +
                            45 * in[r][2 + b] + 1 * in[r][3 + b] +
                            1 * in[r][4 + b] + 1 * in[r][5 + b] +
                            1 * in[r][6 + b] + 1 * in[r][7 + b] -
                            6 * afterSB[r][0 + b] - 6 * afterSB[r][1 + b] -
                            7 * afterSB[r][2 + b] - 8 * afterSB[r][3 + b] -
                            8 * afterSB[r][4 + b] - 8 * afterSB[r][5 + b] -
                            8 * afterSB[r][6 + b] - 8 * afterSB[r][7 + b] >=
                        -7);
        model.addConstr(+0 * in[r][0 + b] + 0 * in[r][1 + b] +
                            0 * in[r][2 + b] + 0 * in[r][3 + b] +
                            0 * in[r][4 + b] + 11 * in[r][5 + b] +
                            0 * in[r][6 + b] + 0 * in[r][7 + b] -
                            2 * afterSB[r][0 + b] - 2 * afterSB[r][1 + b] -
                            1 * afterSB[r][2 + b] - 1 * afterSB[r][3 + b] -
                            2 * afterSB[r][4 + b] - 2 * afterSB[r][5 + b] -
                            2 * afterSB[r][6 + b] - 1 * afterSB[r][7 + b] >=
                        -2);
        model.addConstr(+0 * in[r][0 + b] + 0 * in[r][1 + b] +
                            0 * in[r][2 + b] + 14 * in[r][3 + b] +
                            0 * in[r][4 + b] + 0 * in[r][5 + b] +
                            0 * in[r][6 + b] + 0 * in[r][7 + b] -
                            2 * afterSB[r][0 + b] - 1 * afterSB[r][1 + b] -
                            3 * afterSB[r][2 + b] - 1 * afterSB[r][3 + b] -
                            3 * afterSB[r][4 + b] - 3 * afterSB[r][5 + b] -
                            3 * afterSB[r][6 + b] - 1 * afterSB[r][7 + b] >=
                        -3);
        model.addConstr(+44 * in[r][0 + b] + 1 * in[r][1 + b] +
                            1 * in[r][2 + b] + 2 * in[r][3 + b] +
                            1 * in[r][4 + b] + 1 * in[r][5 + b] +
                            1 * in[r][6 + b] + 1 * in[r][7 + b] -
                            7 * afterSB[r][0 + b] - 1 * afterSB[r][1 + b] -
                            8 * afterSB[r][2 + b] - 9 * afterSB[r][3 + b] -
                            10 * afterSB[r][4 + b] - 10 * afterSB[r][5 + b] -
                            8 * afterSB[r][6 + b] - 8 * afterSB[r][7 + b] >=
                        -9);
        model.addConstr(+0 * in[r][0 + b] + 0 * in[r][1 + b] +
                            0 * in[r][2 + b] + 0 * in[r][3 + b] +
                            0 * in[r][4 + b] + 0 * in[r][5 + b] +
                            5 * in[r][6 + b] + 0 * in[r][7 + b] -
                            1 * afterSB[r][0 + b] - 1 * afterSB[r][1 + b] +
                            0 * afterSB[r][2 + b] - 1 * afterSB[r][3 + b] -
                            1 * afterSB[r][4 + b] - 1 * afterSB[r][5 + b] +
                            0 * afterSB[r][6 + b] - 1 * afterSB[r][7 + b] >=
                        -1);
        model.addConstr(+2 * in[r][0 + b] + 49 * in[r][1 + b] +
                            2 * in[r][2 + b] + 2 * in[r][3 + b] +
                            1 * in[r][4 + b] + 1 * in[r][5 + b] +
                            1 * in[r][6 + b] + 1 * in[r][7 + b] -
                            9 * afterSB[r][0 + b] - 9 * afterSB[r][1 + b] -
                            9 * afterSB[r][2 + b] - 11 * afterSB[r][3 + b] -
                            11 * afterSB[r][4 + b] - 9 * afterSB[r][5 + b] -
                            9 * afterSB[r][6 + b] - 2 * afterSB[r][7 + b] >=
                        -10);
        model.addConstr(-4 * in[r][0 + b] - 3 * in[r][1 + b] -
                            5 * in[r][2 + b] - 6 * in[r][3 + b] -
                            8 * in[r][4 + b] - 11 * in[r][5 + b] -
                            11 * in[r][6 + b] - 1 * in[r][7 + b] +
                            38 * afterSB[r][0 + b] + 41 * afterSB[r][1 + b] +
                            43 * afterSB[r][2 + b] + 46 * afterSB[r][3 + b] +
                            45 * afterSB[r][4 + b] + 48 * afterSB[r][5 + b] +
                            44 * afterSB[r][6 + b] + 44 * afterSB[r][7 + b] >=
                        0);
        model.addConstr(-2 * in[r][0 + b] - 2 * in[r][1 + b] -
                            3 * in[r][2 + b] - 3 * in[r][3 + b] -
                            3 * in[r][4 + b] - 1 * in[r][5 + b] +
                            6 * in[r][6 + b] - 1 * in[r][7 + b] -
                            4 * afterSB[r][0 + b] + 22 * afterSB[r][1 + b] -
                            7 * afterSB[r][2 + b] - 4 * afterSB[r][3 + b] -
                            4 * afterSB[r][4 + b] - 4 * afterSB[r][5 + b] -
                            5 * afterSB[r][6 + b] - 4 * afterSB[r][7 + b] >=
                        -19);
        model.addConstr(-8 * in[r][0 + b] - 15 * in[r][1 + b] -
                            15 * in[r][2 + b] + 0 * in[r][3 + b] -
                            7 * in[r][4 + b] - 7 * in[r][5 + b] -
                            6 * in[r][6 + b] - 1 * in[r][7 + b] -
                            8 * afterSB[r][0 + b] - 9 * afterSB[r][1 + b] +
                            7 * afterSB[r][2 + b] + 6 * afterSB[r][3 + b] -
                            2 * afterSB[r][4 + b] - 1 * afterSB[r][5 + b] -
                            1 * afterSB[r][6 + b] + 6 * afterSB[r][7 + b] >=
                        -61);
        model.addConstr(+0 * in[r][0 + b] + 0 * in[r][1 + b] +
                            2 * in[r][2 + b] - 5 * in[r][3 + b] +
                            1 * in[r][4 + b] + 0 * in[r][5 + b] +
                            1 * in[r][6 + b] + 1 * in[r][7 + b] +
                            22 * afterSB[r][0 + b] - 5 * afterSB[r][1 + b] -
                            5 * afterSB[r][2 + b] - 6 * afterSB[r][3 + b] -
                            5 * afterSB[r][4 + b] - 7 * afterSB[r][5 + b] +
                            0 * afterSB[r][6 + b] - 6 * afterSB[r][7 + b] >=
                        -12);
        model.addConstr(-10 * in[r][0 + b] - 3 * in[r][1 + b] -
                            4 * in[r][2 + b] - 10 * in[r][3 + b] +
                            0 * in[r][4 + b] - 2 * in[r][5 + b] -
                            3 * in[r][6 + b] - 10 * in[r][7 + b] -
                            7 * afterSB[r][0 + b] - 2 * afterSB[r][1 + b] -
                            5 * afterSB[r][2 + b] - 8 * afterSB[r][3 + b] +
                            3 * afterSB[r][4 + b] + 14 * afterSB[r][5 + b] -
                            1 * afterSB[r][6 + b] + 1 * afterSB[r][7 + b] >=
                        -47);
        model.addConstr(+2 * in[r][0 + b] + 3 * in[r][1 + b] +
                            1 * in[r][2 + b] + 4 * in[r][3 + b] +
                            1 * in[r][4 + b] + 1 * in[r][5 + b] +
                            1 * in[r][6 + b] + 16 * in[r][7 + b] -
                            13 * afterSB[r][0 + b] - 14 * afterSB[r][1 + b] -
                            1 * afterSB[r][2 + b] - 16 * afterSB[r][3 + b] +
                            42 * afterSB[r][4 + b] - 18 * afterSB[r][5 + b] -
                            14 * afterSB[r][6 + b] - 12 * afterSB[r][7 + b] >=
                        -17);
        model.addConstr(-1 * in[r][0 + b] - 5 * in[r][1 + b] -
                            4 * in[r][2 + b] - 7 * in[r][3 + b] -
                            8 * in[r][4 + b] - 8 * in[r][5 + b] -
                            2 * in[r][6 + b] - 2 * in[r][7 + b] +
                            4 * afterSB[r][0 + b] - 3 * afterSB[r][1 + b] +
                            3 * afterSB[r][2 + b] + 6 * afterSB[r][3 + b] +
                            4 * afterSB[r][4 + b] + 7 * afterSB[r][5 + b] +
                            3 * afterSB[r][6 + b] + 7 * afterSB[r][7 + b] >=
                        -32);
        model.addConstr(-1 * in[r][0 + b] - 3 * in[r][1 + b] -
                            7 * in[r][2 + b] - 4 * in[r][3 + b] -
                            7 * in[r][4 + b] - 2 * in[r][5 + b] -
                            7 * in[r][6 + b] - 5 * in[r][7 + b] +
                            6 * afterSB[r][0 + b] + 6 * afterSB[r][1 + b] +
                            4 * afterSB[r][2 + b] + 6 * afterSB[r][3 + b] +
                            7 * afterSB[r][4 + b] + 6 * afterSB[r][5 + b] +
                            6 * afterSB[r][6 + b] + 1 * afterSB[r][7 + b] >=
                        -28);
        model.addConstr(+1 * in[r][0 + b] - 1 * in[r][1 + b] +
                            0 * in[r][2 + b] + 0 * in[r][3 + b] +
                            0 * in[r][4 + b] + 4 * in[r][5 + b] +
                            0 * in[r][6 + b] + 1 * in[r][7 + b] -
                            8 * afterSB[r][0 + b] + 3 * afterSB[r][1 + b] -
                            7 * afterSB[r][2 + b] + 17 * afterSB[r][3 + b] -
                            6 * afterSB[r][4 + b] - 3 * afterSB[r][5 + b] -
                            6 * afterSB[r][6 + b] - 4 * afterSB[r][7 + b] >=
                        -9);
        model.addConstr(-3 * in[r][0 + b] + 3 * in[r][1 + b] -
                            2 * in[r][2 + b] - 2 * in[r][3 + b] -
                            2 * in[r][4 + b] - 3 * in[r][5 + b] -
                            2 * in[r][6 + b] - 1 * in[r][7 + b] +
                            1 * afterSB[r][0 + b] + 1 * afterSB[r][1 + b] +
                            2 * afterSB[r][2 + b] - 4 * afterSB[r][3 + b] -
                            4 * afterSB[r][4 + b] + 1 * afterSB[r][5 + b] +
                            2 * afterSB[r][6 + b] - 6 * afterSB[r][7 + b] >=
                        -19);
        model.addConstr(-2 * in[r][0 + b] + 0 * in[r][1 + b] -
                            2 * in[r][2 + b] + 3 * in[r][3 + b] -
                            2 * in[r][4 + b] - 2 * in[r][5 + b] +
                            0 * in[r][6 + b] - 5 * in[r][7 + b] +
                            2 * afterSB[r][0 + b] - 5 * afterSB[r][1 + b] +
                            2 * afterSB[r][2 + b] + 5 * afterSB[r][3 + b] -
                            3 * afterSB[r][4 + b] - 1 * afterSB[r][5 + b] -
                            3 * afterSB[r][6 + b] - 3 * afterSB[r][7 + b] >=
                        -16);
        model.addConstr(-4 * in[r][0 + b] - 7 * in[r][1 + b] -
                            5 * in[r][2 + b] - 4 * in[r][3 + b] -
                            1 * in[r][4 + b] - 8 * in[r][5 + b] -
                            8 * in[r][6 + b] - 3 * in[r][7 + b] +
                            2 * afterSB[r][0 + b] + 9 * afterSB[r][1 + b] +
                            9 * afterSB[r][2 + b] + 5 * afterSB[r][3 + b] +
                            6 * afterSB[r][4 + b] + 7 * afterSB[r][5 + b] +
                            9 * afterSB[r][6 + b] + 9 * afterSB[r][7 + b] >=
                        -30);
        model.addConstr(-2 * in[r][0 + b] - 3 * in[r][1 + b] -
                            1 * in[r][2 + b] - 5 * in[r][3 + b] -
                            5 * in[r][4 + b] + 0 * in[r][5 + b] -
                            4 * in[r][6 + b] - 4 * in[r][7 + b] +
                            1 * afterSB[r][0 + b] + 2 * afterSB[r][1 + b] -
                            4 * afterSB[r][2 + b] + 3 * afterSB[r][3 + b] +
                            2 * afterSB[r][4 + b] + 2 * afterSB[r][5 + b] +
                            3 * afterSB[r][6 + b] + 2 * afterSB[r][7 + b] >=
                        -23);
        model.addConstr(+2 * in[r][0 + b] + 8 * in[r][1 + b] +
                            6 * in[r][2 + b] + 1 * in[r][3 + b] +
                            1 * in[r][4 + b] + 1 * in[r][5 + b] +
                            1 * in[r][6 + b] + 1 * in[r][7 + b] -
                            18 * afterSB[r][0 + b] - 11 * afterSB[r][1 + b] -
                            6 * afterSB[r][2 + b] - 18 * afterSB[r][3 + b] -
                            12 * afterSB[r][4 + b] - 18 * afterSB[r][5 + b] -
                            10 * afterSB[r][6 + b] + 55 * afterSB[r][7 + b] >=
                        -17);
        model.addConstr(-2 * in[r][0 + b] - 2 * in[r][1 + b] +
                            1 * in[r][2 + b] + 3 * in[r][3 + b] -
                            2 * in[r][4 + b] - 2 * in[r][5 + b] -
                            1 * in[r][6 + b] - 1 * in[r][7 + b] -
                            1 * afterSB[r][0 + b] - 5 * afterSB[r][1 + b] -
                            3 * afterSB[r][2 + b] - 3 * afterSB[r][3 + b] -
                            1 * afterSB[r][4 + b] + 2 * afterSB[r][5 + b] +
                            0 * afterSB[r][6 + b] + 4 * afterSB[r][7 + b] >=
                        -13);
        model.addConstr(+0 * in[r][0 + b] - 3 * in[r][1 + b] +
                            2 * in[r][2 + b] + 0 * in[r][3 + b] +
                            0 * in[r][4 + b] + 0 * in[r][5 + b] +
                            0 * in[r][6 + b] + 1 * in[r][7 + b] -
                            3 * afterSB[r][0 + b] + 1 * afterSB[r][1 + b] -
                            3 * afterSB[r][2 + b] + 11 * afterSB[r][3 + b] -
                            2 * afterSB[r][4 + b] - 4 * afterSB[r][5 + b] -
                            4 * afterSB[r][6 + b] - 3 * afterSB[r][7 + b] >=
                        -7);
        model.addConstr(-1 * in[r][0 + b] + 0 * in[r][1 + b] -
                            4 * in[r][2 + b] - 3 * in[r][3 + b] -
                            5 * in[r][4 + b] - 5 * in[r][5 + b] -
                            5 * in[r][6 + b] - 1 * in[r][7 + b] +
                            2 * afterSB[r][0 + b] + 5 * afterSB[r][1 + b] +
                            6 * afterSB[r][2 + b] + 7 * afterSB[r][3 + b] +
                            6 * afterSB[r][4 + b] + 6 * afterSB[r][5 + b] +
                            5 * afterSB[r][6 + b] + 4 * afterSB[r][7 + b] >=
                        -17);
        model.addConstr(+1 * in[r][0 + b] + 2 * in[r][1 + b] +
                            1 * in[r][2 + b] - 2 * in[r][3 + b] +
                            2 * in[r][4 + b] + 0 * in[r][5 + b] -
                            2 * in[r][6 + b] - 2 * in[r][7 + b] +
                            19 * afterSB[r][0 + b] - 4 * afterSB[r][1 + b] -
                            5 * afterSB[r][2 + b] - 5 * afterSB[r][3 + b] -
                            4 * afterSB[r][4 + b] - 4 * afterSB[r][5 + b] -
                            4 * afterSB[r][6 + b] - 4 * afterSB[r][7 + b] >=
                        -11);
        model.addConstr(-3 * in[r][0 + b] - 4 * in[r][1 + b] -
                            4 * in[r][2 + b] - 2 * in[r][3 + b] -
                            1 * in[r][4 + b] - 1 * in[r][5 + b] -
                            4 * in[r][6 + b] - 2 * in[r][7 + b] +
                            3 * afterSB[r][0 + b] + 3 * afterSB[r][1 + b] +
                            3 * afterSB[r][2 + b] + 0 * afterSB[r][3 + b] +
                            3 * afterSB[r][4 + b] + 3 * afterSB[r][5 + b] +
                            3 * afterSB[r][6 + b] + 3 * afterSB[r][7 + b] >=
                        -17);
        model.addConstr(-3 * in[r][0 + b] - 1 * in[r][1 + b] -
                            4 * in[r][2 + b] - 4 * in[r][3 + b] -
                            4 * in[r][4 + b] - 2 * in[r][5 + b] -
                            1 * in[r][6 + b] + 0 * in[r][7 + b] +
                            4 * afterSB[r][0 + b] + 3 * afterSB[r][1 + b] +
                            1 * afterSB[r][2 + b] + 4 * afterSB[r][3 + b] +
                            4 * afterSB[r][4 + b] + 5 * afterSB[r][5 + b] +
                            3 * afterSB[r][6 + b] + 4 * afterSB[r][7 + b] >=
                        -14);
        model.addConstr(-4 * in[r][0 + b] - 5 * in[r][1 + b] -
                            9 * in[r][2 + b] - 9 * in[r][3 + b] -
                            9 * in[r][4 + b] - 9 * in[r][5 + b] +
                            6 * in[r][6 + b] + 0 * in[r][7 + b] -
                            5 * afterSB[r][0 + b] - 15 * afterSB[r][1 + b] +
                            4 * afterSB[r][2 + b] + 3 * afterSB[r][3 + b] -
                            6 * afterSB[r][4 + b] - 1 * afterSB[r][5 + b] +
                            5 * afterSB[r][6 + b] + 3 * afterSB[r][7 + b] >=
                        -51);
        model.addConstr(-1 * in[r][0 + b] - 2 * in[r][1 + b] -
                            2 * in[r][2 + b] + 0 * in[r][3 + b] -
                            2 * in[r][4 + b] - 1 * in[r][5 + b] -
                            2 * in[r][6 + b] - 1 * in[r][7 + b] +
                            2 * afterSB[r][0 + b] + 1 * afterSB[r][1 + b] +
                            1 * afterSB[r][2 + b] + 1 * afterSB[r][3 + b] -
                            2 * afterSB[r][4 + b] - 2 * afterSB[r][5 + b] +
                            1 * afterSB[r][6 + b] - 4 * afterSB[r][7 + b] >=
                        -13);
        model.addConstr(-1 * in[r][0 + b] - 2 * in[r][1 + b] +
                            0 * in[r][2 + b] - 1 * in[r][3 + b] -
                            1 * in[r][4 + b] - 1 * in[r][5 + b] -
                            1 * in[r][6 + b] - 2 * in[r][7 + b] +
                            1 * afterSB[r][0 + b] + 1 * afterSB[r][1 + b] -
                            1 * afterSB[r][2 + b] + 0 * afterSB[r][3 + b] -
                            1 * afterSB[r][4 + b] + 0 * afterSB[r][5 + b] +
                            0 * afterSB[r][6 + b] + 0 * afterSB[r][7 + b] >=
                        -9);
        model.addConstr(+0 * in[r][0 + b] - 1 * in[r][1 + b] -
                            1 * in[r][2 + b] + 0 * in[r][3 + b] +
                            1 * in[r][4 + b] - 1 * in[r][5 + b] -
                            1 * in[r][6 + b] - 1 * in[r][7 + b] -
                            2 * afterSB[r][0 + b] - 1 * afterSB[r][1 + b] +
                            1 * afterSB[r][2 + b] + 1 * afterSB[r][3 + b] -
                            1 * afterSB[r][4 + b] + 1 * afterSB[r][5 + b] -
                            1 * afterSB[r][6 + b] + 0 * afterSB[r][7 + b] >=
                        -6);
        model.addConstr(+0 * in[r][0 + b] + 1 * in[r][1 + b] -
                            1 * in[r][2 + b] + 1 * in[r][3 + b] -
                            1 * in[r][4 + b] - 1 * in[r][5 + b] -
                            1 * in[r][6 + b] - 1 * in[r][7 + b] -
                            1 * afterSB[r][0 + b] + 1 * afterSB[r][1 + b] +
                            0 * afterSB[r][2 + b] + 0 * afterSB[r][3 + b] +
                            0 * afterSB[r][4 + b] + 0 * afterSB[r][5 + b] +
                            0 * afterSB[r][6 + b] + 0 * afterSB[r][7 + b] >=
                        -5);
    }
}

void MixColumnsConstr(GRBModel& model, vector<vector<GRBVar>>& afterSR,
                      vector<vector<GRBVar>>& afterMC,
                      vector<vector<GRBVar>>& t, int r) {
    for (int i = 0; i < NM; i++) {
        t[r][i] = model.addVar(0, 1, 0, GRB_BINARY);
    }

    for (int row = 0; row < 1; row++) {
        model.addConstr(afterSR[r][32 * row + 0] - t[r][row * 184 + 0] -
                            t[r][row * 184 + 1] - t[r][row * 184 + 2] -
                            t[r][row * 184 + 3] - t[r][row * 184 + 4] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 1] - t[r][row * 184 + 5] -
                            t[r][row * 184 + 6] - t[r][row * 184 + 7] -
                            t[r][row * 184 + 8] - t[r][row * 184 + 9] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 2] - t[r][row * 184 + 10] -
                            t[r][row * 184 + 11] - t[r][row * 184 + 12] -
                            t[r][row * 184 + 13] - t[r][row * 184 + 14] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 3] - t[r][row * 184 + 15] -
                            t[r][row * 184 + 16] - t[r][row * 184 + 17] -
                            t[r][row * 184 + 18] - t[r][row * 184 + 19] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 4] - t[r][row * 184 + 20] -
                            t[r][row * 184 + 21] - t[r][row * 184 + 22] -
                            t[r][row * 184 + 23] - t[r][row * 184 + 24] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 5] - t[r][row * 184 + 25] -
                            t[r][row * 184 + 26] - t[r][row * 184 + 27] -
                            t[r][row * 184 + 28] - t[r][row * 184 + 29] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 6] - t[r][row * 184 + 30] -
                            t[r][row * 184 + 31] - t[r][row * 184 + 32] -
                            t[r][row * 184 + 33] - t[r][row * 184 + 34] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 7] - t[r][row * 184 + 35] -
                            t[r][row * 184 + 36] - t[r][row * 184 + 37] -
                            t[r][row * 184 + 38] - t[r][row * 184 + 39] -
                            t[r][row * 184 + 40] - t[r][row * 184 + 41] -
                            t[r][row * 184 + 42] - t[r][row * 184 + 43] -
                            t[r][row * 184 + 44] - t[r][row * 184 + 45] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 8] - t[r][row * 184 + 46] -
                            t[r][row * 184 + 47] - t[r][row * 184 + 48] -
                            t[r][row * 184 + 49] - t[r][row * 184 + 50] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 9] - t[r][row * 184 + 51] -
                            t[r][row * 184 + 52] - t[r][row * 184 + 53] -
                            t[r][row * 184 + 54] - t[r][row * 184 + 55] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 10] - t[r][row * 184 + 56] -
                            t[r][row * 184 + 57] - t[r][row * 184 + 58] -
                            t[r][row * 184 + 59] - t[r][row * 184 + 60] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 11] - t[r][row * 184 + 61] -
                            t[r][row * 184 + 62] - t[r][row * 184 + 63] -
                            t[r][row * 184 + 64] - t[r][row * 184 + 65] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 12] - t[r][row * 184 + 66] -
                            t[r][row * 184 + 67] - t[r][row * 184 + 68] -
                            t[r][row * 184 + 69] - t[r][row * 184 + 70] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 13] - t[r][row * 184 + 71] -
                            t[r][row * 184 + 72] - t[r][row * 184 + 73] -
                            t[r][row * 184 + 74] - t[r][row * 184 + 75] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 14] - t[r][row * 184 + 76] -
                            t[r][row * 184 + 77] - t[r][row * 184 + 78] -
                            t[r][row * 184 + 79] - t[r][row * 184 + 80] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 15] - t[r][row * 184 + 81] -
                            t[r][row * 184 + 82] - t[r][row * 184 + 83] -
                            t[r][row * 184 + 84] - t[r][row * 184 + 85] -
                            t[r][row * 184 + 86] - t[r][row * 184 + 87] -
                            t[r][row * 184 + 88] - t[r][row * 184 + 89] -
                            t[r][row * 184 + 90] - t[r][row * 184 + 91] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 16] - t[r][row * 184 + 92] -
                            t[r][row * 184 + 93] - t[r][row * 184 + 94] -
                            t[r][row * 184 + 95] - t[r][row * 184 + 96] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 17] - t[r][row * 184 + 97] -
                            t[r][row * 184 + 98] - t[r][row * 184 + 99] -
                            t[r][row * 184 + 100] - t[r][row * 184 + 101] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 18] - t[r][row * 184 + 102] -
                            t[r][row * 184 + 103] - t[r][row * 184 + 104] -
                            t[r][row * 184 + 105] - t[r][row * 184 + 106] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 19] - t[r][row * 184 + 107] -
                            t[r][row * 184 + 108] - t[r][row * 184 + 109] -
                            t[r][row * 184 + 110] - t[r][row * 184 + 111] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 20] - t[r][row * 184 + 112] -
                            t[r][row * 184 + 113] - t[r][row * 184 + 114] -
                            t[r][row * 184 + 115] - t[r][row * 184 + 116] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 21] - t[r][row * 184 + 117] -
                            t[r][row * 184 + 118] - t[r][row * 184 + 119] -
                            t[r][row * 184 + 120] - t[r][row * 184 + 121] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 22] - t[r][row * 184 + 122] -
                            t[r][row * 184 + 123] - t[r][row * 184 + 124] -
                            t[r][row * 184 + 125] - t[r][row * 184 + 126] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 23] - t[r][row * 184 + 127] -
                            t[r][row * 184 + 128] - t[r][row * 184 + 129] -
                            t[r][row * 184 + 130] - t[r][row * 184 + 131] -
                            t[r][row * 184 + 132] - t[r][row * 184 + 133] -
                            t[r][row * 184 + 134] - t[r][row * 184 + 135] -
                            t[r][row * 184 + 136] - t[r][row * 184 + 137] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 24] - t[r][row * 184 + 138] -
                            t[r][row * 184 + 139] - t[r][row * 184 + 140] -
                            t[r][row * 184 + 141] - t[r][row * 184 + 142] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 25] - t[r][row * 184 + 143] -
                            t[r][row * 184 + 144] - t[r][row * 184 + 145] -
                            t[r][row * 184 + 146] - t[r][row * 184 + 147] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 26] - t[r][row * 184 + 148] -
                            t[r][row * 184 + 149] - t[r][row * 184 + 150] -
                            t[r][row * 184 + 151] - t[r][row * 184 + 152] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 27] - t[r][row * 184 + 153] -
                            t[r][row * 184 + 154] - t[r][row * 184 + 155] -
                            t[r][row * 184 + 156] - t[r][row * 184 + 157] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 28] - t[r][row * 184 + 158] -
                            t[r][row * 184 + 159] - t[r][row * 184 + 160] -
                            t[r][row * 184 + 161] - t[r][row * 184 + 162] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 29] - t[r][row * 184 + 163] -
                            t[r][row * 184 + 164] - t[r][row * 184 + 165] -
                            t[r][row * 184 + 166] - t[r][row * 184 + 167] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 30] - t[r][row * 184 + 168] -
                            t[r][row * 184 + 169] - t[r][row * 184 + 170] -
                            t[r][row * 184 + 171] - t[r][row * 184 + 172] ==
                        0);
        model.addConstr(afterSR[r][32 * row + 31] - t[r][row * 184 + 173] -
                            t[r][row * 184 + 174] - t[r][row * 184 + 175] -
                            t[r][row * 184 + 176] - t[r][row * 184 + 177] -
                            t[r][row * 184 + 178] - t[r][row * 184 + 179] -
                            t[r][row * 184 + 180] - t[r][row * 184 + 181] -
                            t[r][row * 184 + 182] - t[r][row * 184 + 183] ==
                        0);
    }

    for (int col = 0; col < 1; col++) {
        model.addConstr(t[r][col * 184 + 35] + t[r][col * 184 + 46] +
                            t[r][col * 184 + 81] + t[r][col * 184 + 92] +
                            t[r][col * 184 + 138] - afterMC[r][32 * col + 0] ==
                        0);
        model.addConstr(t[r][col * 184 + 0] + t[r][col * 184 + 36] +
                            t[r][col * 184 + 47] + t[r][col * 184 + 51] +
                            t[r][col * 184 + 82] + t[r][col * 184 + 97] +
                            t[r][col * 184 + 143] - afterMC[r][32 * col + 1] ==
                        0);
        model.addConstr(t[r][col * 184 + 5] + t[r][col * 184 + 52] +
                            t[r][col * 184 + 56] + t[r][col * 184 + 102] +
                            t[r][col * 184 + 148] - afterMC[r][32 * col + 2] ==
                        0);
        model.addConstr(t[r][col * 184 + 10] + t[r][col * 184 + 37] +
                            t[r][col * 184 + 57] + t[r][col * 184 + 61] +
                            t[r][col * 184 + 83] + t[r][col * 184 + 107] +
                            t[r][col * 184 + 153] - afterMC[r][32 * col + 3] ==
                        0);
        model.addConstr(t[r][col * 184 + 15] + t[r][col * 184 + 38] +
                            t[r][col * 184 + 62] + t[r][col * 184 + 66] +
                            t[r][col * 184 + 84] + t[r][col * 184 + 112] +
                            t[r][col * 184 + 158] - afterMC[r][32 * col + 4] ==
                        0);
        model.addConstr(t[r][col * 184 + 20] + t[r][col * 184 + 67] +
                            t[r][col * 184 + 71] + t[r][col * 184 + 117] +
                            t[r][col * 184 + 163] - afterMC[r][32 * col + 5] ==
                        0);
        model.addConstr(t[r][col * 184 + 25] + t[r][col * 184 + 72] +
                            t[r][col * 184 + 76] + t[r][col * 184 + 122] +
                            t[r][col * 184 + 168] - afterMC[r][32 * col + 6] ==
                        0);
        model.addConstr(t[r][col * 184 + 30] + t[r][col * 184 + 77] +
                            t[r][col * 184 + 85] + t[r][col * 184 + 127] +
                            t[r][col * 184 + 173] - afterMC[r][32 * col + 7] ==
                        0);
        model.addConstr(t[r][col * 184 + 1] + t[r][col * 184 + 86] +
                            t[r][col * 184 + 93] + t[r][col * 184 + 128] +
                            t[r][col * 184 + 139] - afterMC[r][32 * col + 8] ==
                        0);
        model.addConstr(t[r][col * 184 + 6] + t[r][col * 184 + 48] +
                            t[r][col * 184 + 87] + t[r][col * 184 + 94] +
                            t[r][col * 184 + 98] + t[r][col * 184 + 129] +
                            t[r][col * 184 + 144] - afterMC[r][32 * col + 9] ==
                        0);
        model.addConstr(t[r][col * 184 + 11] + t[r][col * 184 + 53] +
                            t[r][col * 184 + 99] + t[r][col * 184 + 103] +
                            t[r][col * 184 + 149] - afterMC[r][32 * col + 10] ==
                        0);
        model.addConstr(t[r][col * 184 + 16] + t[r][col * 184 + 58] +
                            t[r][col * 184 + 88] + t[r][col * 184 + 104] +
                            t[r][col * 184 + 108] + t[r][col * 184 + 130] +
                            t[r][col * 184 + 154] - afterMC[r][32 * col + 11] ==
                        0);
        model.addConstr(t[r][col * 184 + 21] + t[r][col * 184 + 63] +
                            t[r][col * 184 + 89] + t[r][col * 184 + 109] +
                            t[r][col * 184 + 113] + t[r][col * 184 + 131] +
                            t[r][col * 184 + 159] - afterMC[r][32 * col + 12] ==
                        0);
        model.addConstr(t[r][col * 184 + 26] + t[r][col * 184 + 68] +
                            t[r][col * 184 + 114] + t[r][col * 184 + 118] +
                            t[r][col * 184 + 164] - afterMC[r][32 * col + 13] ==
                        0);
        model.addConstr(t[r][col * 184 + 31] + t[r][col * 184 + 73] +
                            t[r][col * 184 + 119] + t[r][col * 184 + 123] +
                            t[r][col * 184 + 169] - afterMC[r][32 * col + 14] ==
                        0);
        model.addConstr(t[r][col * 184 + 39] + t[r][col * 184 + 78] +
                            t[r][col * 184 + 124] + t[r][col * 184 + 132] +
                            t[r][col * 184 + 174] - afterMC[r][32 * col + 15] ==
                        0);
        model.addConstr(t[r][col * 184 + 2] + t[r][col * 184 + 49] +
                            t[r][col * 184 + 133] + t[r][col * 184 + 140] +
                            t[r][col * 184 + 175] - afterMC[r][32 * col + 16] ==
                        0);
        model.addConstr(t[r][col * 184 + 7] + t[r][col * 184 + 54] +
                            t[r][col * 184 + 95] + t[r][col * 184 + 134] +
                            t[r][col * 184 + 141] + t[r][col * 184 + 145] +
                            t[r][col * 184 + 176] - afterMC[r][32 * col + 17] ==
                        0);
        model.addConstr(t[r][col * 184 + 12] + t[r][col * 184 + 59] +
                            t[r][col * 184 + 100] + t[r][col * 184 + 146] +
                            t[r][col * 184 + 150] - afterMC[r][32 * col + 18] ==
                        0);
        model.addConstr(t[r][col * 184 + 17] + t[r][col * 184 + 64] +
                            t[r][col * 184 + 105] + t[r][col * 184 + 135] +
                            t[r][col * 184 + 151] + t[r][col * 184 + 155] +
                            t[r][col * 184 + 177] - afterMC[r][32 * col + 19] ==
                        0);
        model.addConstr(t[r][col * 184 + 22] + t[r][col * 184 + 69] +
                            t[r][col * 184 + 110] + t[r][col * 184 + 136] +
                            t[r][col * 184 + 156] + t[r][col * 184 + 160] +
                            t[r][col * 184 + 178] - afterMC[r][32 * col + 20] ==
                        0);
        model.addConstr(t[r][col * 184 + 27] + t[r][col * 184 + 74] +
                            t[r][col * 184 + 115] + t[r][col * 184 + 161] +
                            t[r][col * 184 + 165] - afterMC[r][32 * col + 21] ==
                        0);
        model.addConstr(t[r][col * 184 + 32] + t[r][col * 184 + 79] +
                            t[r][col * 184 + 120] + t[r][col * 184 + 166] +
                            t[r][col * 184 + 170] - afterMC[r][32 * col + 22] ==
                        0);
        model.addConstr(t[r][col * 184 + 40] + t[r][col * 184 + 90] +
                            t[r][col * 184 + 125] + t[r][col * 184 + 171] +
                            t[r][col * 184 + 179] - afterMC[r][32 * col + 23] ==
                        0);
        model.addConstr(t[r][col * 184 + 3] + t[r][col * 184 + 41] +
                            t[r][col * 184 + 50] + t[r][col * 184 + 96] +
                            t[r][col * 184 + 180] - afterMC[r][32 * col + 24] ==
                        0);
        model.addConstr(t[r][col * 184 + 4] + t[r][col * 184 + 8] +
                            t[r][col * 184 + 42] + t[r][col * 184 + 55] +
                            t[r][col * 184 + 101] + t[r][col * 184 + 142] +
                            t[r][col * 184 + 181] - afterMC[r][32 * col + 25] ==
                        0);
        model.addConstr(t[r][col * 184 + 9] + t[r][col * 184 + 13] +
                            t[r][col * 184 + 60] + t[r][col * 184 + 106] +
                            t[r][col * 184 + 147] - afterMC[r][32 * col + 26] ==
                        0);
        model.addConstr(t[r][col * 184 + 14] + t[r][col * 184 + 18] +
                            t[r][col * 184 + 43] + t[r][col * 184 + 65] +
                            t[r][col * 184 + 111] + t[r][col * 184 + 152] +
                            t[r][col * 184 + 182] - afterMC[r][32 * col + 27] ==
                        0);
        model.addConstr(t[r][col * 184 + 19] + t[r][col * 184 + 23] +
                            t[r][col * 184 + 44] + t[r][col * 184 + 70] +
                            t[r][col * 184 + 116] + t[r][col * 184 + 157] +
                            t[r][col * 184 + 183] - afterMC[r][32 * col + 28] ==
                        0);
        model.addConstr(t[r][col * 184 + 24] + t[r][col * 184 + 28] +
                            t[r][col * 184 + 75] + t[r][col * 184 + 121] +
                            t[r][col * 184 + 162] - afterMC[r][32 * col + 29] ==
                        0);
        model.addConstr(t[r][col * 184 + 29] + t[r][col * 184 + 33] +
                            t[r][col * 184 + 80] + t[r][col * 184 + 126] +
                            t[r][col * 184 + 167] - afterMC[r][32 * col + 30] ==
                        0);
        model.addConstr(t[r][col * 184 + 34] + t[r][col * 184 + 45] +
                            t[r][col * 184 + 91] + t[r][col * 184 + 137] +
                            t[r][col * 184 + 172] - afterMC[r][32 * col + 31] ==
                        0);
    }
}
