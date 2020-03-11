#include "lrgLinearModelSolverStrategyI.h"

class DataSolver : public DataSolverI {
    public:
    DataSolver();
    std::pair<double, double> &FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta);
};