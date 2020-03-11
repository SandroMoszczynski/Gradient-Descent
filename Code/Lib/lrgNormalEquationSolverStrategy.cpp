#include "lrgNormalEquationSolverStrategy.h"
#include <vector>
#include <random>
#include <Eigen/Dense>

using namespace Eigen;

DataSolver::DataSolver(){}

std::pair<double, double> DataSolver::FitData(std::vector<std::pair<double, double> > Inputs){

    Inputs = Inputs;
    std::vector<float> X; 
    std::vector<float> Y; 

    for (auto it = std::make_move_iterator(Inputs.begin()),
            end = std::make_move_iterator(Inputs.end()); it != end; ++it)
    {
        X.push_back(std::move(it->first));
        Y.push_back(std::move(it->second));
    }
    
    VectorXf Y_e = Map<VectorXf, Unaligned>(Y.data(), Y.size());
    VectorXf X_e = Map<VectorXf, Unaligned>(X.data(), X.size());
    VectorXf X_0 = VectorXf::Ones(X_e.size());

    MatrixXf M_X;
    M_X << X_e,X_0;

    std::pair<double, double>Theta;

    VectorXf Theta_e;

    Theta_e =  (((M_X.transpose()*M_X).inverse())*(X_e.transpose()))*Y_e;

    Theta.first = Theta_e[0];
    Theta.second = Theta_e[1];
    
    return Theta; 
};
