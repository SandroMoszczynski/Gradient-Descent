#include "lrgNormalEquationSolverStrategy.h"
#include <vector>
#include <random>
#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

DataSolver::DataSolver(){}

// empty class method above

std::pair<double, double> &DataSolver::FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta){

// as with the gradient solver, we need to create input matricies (the code was copied from this file so it is identical)

    VectorXd Y_e = VectorXd::Ones(Inputs.size());
    MatrixXd M_X = MatrixXd::Ones(Inputs.size(),2);

    for(int i=0; i < Inputs.size();++i){
        Y_e(i) = Inputs[i].second;
        M_X(i,0) = Inputs[i].first;
    }

// create a matrix to append our output theta to

    MatrixXd Theta_e = MatrixXd::Ones(2,1);

// here is all the linear algebra

    Theta_e =  (((M_X.transpose()*M_X).inverse())*(M_X.transpose()))*Y_e;

    Theta.first = Theta_e(0);
    Theta.second = Theta_e(1);
    
    return Theta; 
};
