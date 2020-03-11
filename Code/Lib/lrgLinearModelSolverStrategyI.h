#include <memory>
#include <vector>
//#ifndef lrgLinearModelSolverStrategyI_H
//#define lrgLinearModelSolverStrategyI_H

class DataSolverI {
    public:
    virtual std::pair<double, double> &FitData(std::vector<std::pair<double, double> >&,std::pair<double, double>&) = 0;
};

//#endif 