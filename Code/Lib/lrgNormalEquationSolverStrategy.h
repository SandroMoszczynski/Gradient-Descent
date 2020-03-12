#include "lrgLinearModelSolverStrategyI.h"

class DataSolver : public DataSolverI {
    public:
    DataSolver();
    std::pair<double, double> &FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta);
};

// this requires no inputs as contructors, only a predefined pair double to be able to keep the data after the function ends.