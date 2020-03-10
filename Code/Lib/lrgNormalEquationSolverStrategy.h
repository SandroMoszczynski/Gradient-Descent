#include "lrgLinearModelSolverStrategyI.h"

class DataSolver : public DataSolverI {
    private:
    float theta_1;
    float theta_0;
    public:
    DataSolver(float theta_1,float theta_0);
    std::pair<double, double> FitData(std::vector<std::pair<double, double> >){};
};