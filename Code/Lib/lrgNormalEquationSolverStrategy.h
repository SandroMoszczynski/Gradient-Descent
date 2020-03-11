#include "lrgLinearModelSolverStrategyI.h"

class DataSolver : public DataSolverI {
    private:
    std::vector<std::pair<double, double> > Inputs;
    public:
    DataSolver(std::vector<std::pair<double, double> > Inputs);
    std::pair<double, double> FitData(std::vector<std::pair<double, double> >);
};