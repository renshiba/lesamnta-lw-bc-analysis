#include <iostream>
#include <vector>

#include "/opt/gurobi902/linux64/include/gurobi_c++.h"
// server2
//#include "/opt/gurobi903/linux64/include/gurobi_c++.h"

using namespace std;

const int STATE_SIZE = 8;
const int BLOCK_SIZE = 32;

void SubBytesConstr(GRBModel& model, vector<vector<GRBVar>>& in,
                    vector<vector<GRBVar>>& sb, int r);

void ShiftRowsConstr(GRBModel& model, vector<vector<GRBVar>>& in,
                     vector<vector<GRBVar>>& sb, int r);

void MixColumnsConstr(GRBModel& model, vector<vector<GRBVar>>& sr,
                      vector<vector<GRBVar>>& mc, int r);

void copy_constr(GRBModel& model, vector<vector<GRBVar>>& x,
                 vector<vector<GRBVar>>& y0, vector<vector<GRBVar>>& y1, int r);

void xor_constr(GRBModel& model, vector<vector<GRBVar>>& x0,
                vector<vector<GRBVar>>& x1, vector<vector<GRBVar>>& y, int r);

