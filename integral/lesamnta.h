#include <iostream>
#include <vector>

#include "/opt/gurobi902/linux64/include/gurobi_c++.h"

using namespace std;

const int STATE_SIZE = 64;
const int BLOCK_SIZE = 256;

const int NM = 184;

void SubBytesConstr(GRBModel& model, vector<vector<GRBVar>>& in,
                    vector<vector<GRBVar>>& sb, int r);

void MixColumnsConstr(GRBModel& model, vector<vector<GRBVar>>& sr,
                      vector<vector<GRBVar>>& mc, vector<vector<GRBVar>>& t,
                      int r);

void copy_constr(GRBModel& model, vector<vector<GRBVar>>& x,
                 vector<vector<GRBVar>>& y0, vector<vector<GRBVar>>& y1, int r);

void xor_constr(GRBModel& model, vector<vector<GRBVar>>& x0,
                vector<vector<GRBVar>>& x1, vector<vector<GRBVar>>& y, int r);

