#include "lesamnta.h"

void SubBytesConstr(GRBModel& model, vector<vector<GRBVar>>& in,
                    vector<vector<GRBVar>>& sb, int r) {
    for (int i = 0; i < 4; i++) {
        model.addConstr(in[r][i] == sb[r][i]);
    }
}

void MixColumnsConstr(GRBModel& model, vector<vector<GRBVar>>& sr,
                      vector<vector<GRBVar>>& mc, int r) {
    GRBVar d;
    d = model.addVar(0, 1, 0, GRB_BINARY);  // dummy variable
    model.addConstr(sr[r][0] + sr[r][1] + sr[r][2] + sr[r][3] + mc[r][0] +
                        mc[r][1] + mc[r][2] + mc[r][3] >=
                    5 * d);
    model.addConstr(d >= sr[r][0]);
    model.addConstr(d >= sr[r][1]);
    model.addConstr(d >= sr[r][2]);
    model.addConstr(d >= sr[r][3]);
    model.addConstr(d >= mc[r][0]);
    model.addConstr(d >= mc[r][1]);
    model.addConstr(d >= mc[r][2]);
    model.addConstr(d >= mc[r][3]);
}
