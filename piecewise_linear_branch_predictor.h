#ifndef PIECEWISE_LINEAR_BRANCH_PREDICTOR_H
#define PIECEWISE_LINEAR_BRANCH_PREDICTOR_H

#include <cstdlib>
#include <cmath>
#include <cstdint>

#include "branch_predictor.h"
#include "simulator.h"

#define HIST_LENGTH 20
#define ADDR_RANGE 256 //Value of N
#define GA_RANGE 256 //Value of M

class PiecewiseLinearPredictor : public BranchPredictor
{
    public:
        PiecewiseLinearPredictor(String name, core_id_t core_id);

        bool predict(IntPtr ip, IntPtr target);
        void update(bool predicted, bool actual, IntPtr ip, IntPtr target);

    private:

        bool GHR[HIST_LENGTH];
        IntPtr GA[HIST_LENGTH];
        int output;
        int weight[ADDR_RANGE][GA_RANGE][HIST_LENGTH + 1];
};

#endif