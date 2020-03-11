#include "lrgGradientDescentSolverStrategy.h"
#include <vector>
#include <random>
#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;

GradientSolver::GradientSolver(float _eta,int _iterations,int _batch_size)
{
    eta = _eta;
    iterations = _iterations; 
    batch_size = _batch_size;
}

std::pair<double, double> GradientSolver::FitData(std::vector<std::pair<double, double> > Inputs){

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

    MatrixXf Gradient(1,2);

    std::pair<double, double>Theta;
    Matrix2d Theta_e = Matrix2d::Random(1,2);

    // need to make a random guess for theta

//    for(int k=0; k < iterations; ++k){
//      Gradient = 2/batch_size * M_X.transpose()*((M_X*Theta_e)-Y_e);
//      Theta_e = Theta_e - eta*Gradient;
//    };

//    Theta.first = Theta_e(0);
 //   Theta.second = Theta_e(1);
    
    return Theta; 
};



