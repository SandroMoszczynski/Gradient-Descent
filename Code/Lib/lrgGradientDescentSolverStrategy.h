#include "lrgLinearModelSolverStrategyI.h"

//load in pure virtual interface
//overload with a second class, in this case gradient solver
//the inputs here can be specified, ideal inputs for solving data1 and data2 are listed in the pngs and readme.

class GradientSolver : public DataSolverI {
    private:
    float eta; 
    int iterations;
    float batch_size;
    public:
    GradientSolver(float eta,int iterations,float batch_size);
    std::pair<double, double> &FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta);
};

// as stated in the datacreatori.h file, the & is needed to keep the outputs for small sized variables, especially  -
// for the case of a double pair, thus requireing the a second input. Note this can happily be the same variable,   -
// which is often used in the calling functions. 