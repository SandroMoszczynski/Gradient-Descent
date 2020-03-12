#include <memory>
#include <vector>
#ifndef lrgLinearModelSolverStrategyI_H
#define lrgLinearModelSolverStrategyI_H

// as with the pure virtual interface of our data creator, we must set up the def and define to allow for overloading.

class DataSolverI {
    public:
    virtual std::pair<double, double> &FitData(std::vector<std::pair<double, double> >&,std::pair<double, double>&) = 0;
};

#endif 