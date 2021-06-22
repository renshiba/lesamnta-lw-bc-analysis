#include "lesamnta.h"

void copy_constr(GRBModel& model, vector<vector<GRBVar>>& x,
                 vector<vector<GRBVar>>& y0, vector<vector<GRBVar>>& y1,
                 int r) {
    for (int i = 0; i < STATE_SIZE; i++) {
        model.addConstr(x[r][i] == y0[r][i]);
        model.addConstr(x[r][i] == y1[r][i]);
    }
}

void xor_constr(GRBModel& model, vector<vector<GRBVar>>& x0,
                vector<vector<GRBVar>>& x1, vector<vector<GRBVar>>& y, int r) {
    vector<GRBVar> d(STATE_SIZE);
    for (int i = 0; i < STATE_SIZE; i++) {
        d[i] = model.addVar(0, 1, 0, GRB_BINARY);
    }
    for (int i = 0; i < STATE_SIZE; i++) {
        model.addConstr(x0[r][i] + x1[r][i] + y[r][i] >= 2 * d[i]);
        model.addConstr(d[i] >= x0[r][i]);
        model.addConstr(d[i] >= x1[r][i]);
        model.addConstr(d[i] >= y[r][i]);
    }
}
