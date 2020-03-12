#include "lrgLinearModelSolverStrategyI.h"

class GradientSolver : public DataSolverI {
    private:
    float eta; 
    int iterations;
    float batch_size;
    public:
    GradientSolver(float eta,int iterations,float batch_size);
    std::pair<double, double> &FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta);
};