#include "lrgGradientDescentSolverStrategy.h"
#include <vector>
#include <random>
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;

GradientSolver::GradientSolver(float _eta,int _iterations,float _batch_size)
{
    eta = _eta;
    iterations = _iterations; 
    batch_size = _batch_size;
}

std::pair<double, double> &GradientSolver::FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta){


    VectorXd Y_e = VectorXd::Ones(Inputs.size());
    MatrixXd M_X = MatrixXd::Ones(Inputs.size(),2);

    for(int i=0; i < Inputs.size();++i){
        Y_e(i) = Inputs[i].second;
        M_X.col(1)(i) = Inputs[i].first;
    }
    
    MatrixXd Gradient;
    MatrixXd Theta_e = MatrixXd::Random(2,1);

    for(int k=0; k < iterations; ++k){
        Gradient = (2/batch_size) * (M_X.transpose()*((M_X*Theta_e)-Y_e));
        Theta_e = (Theta_e - (eta*Gradient));
    }

    Theta.first = Theta_e(1);
    Theta.second = Theta_e(0);
    
    return Theta; 
};



