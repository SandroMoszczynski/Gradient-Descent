#include "lrgNormalEquationSolverStrategy.h"
#include <vector>
#include <random>
#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

DataSolver::DataSolver(){}

std::pair<double, double> &DataSolver::FitData(std::vector<std::pair<double, double> >&Inputs,std::pair<double, double>&Theta){

    Vector2d Y_e = Vector2d::Ones(Inputs.size());
    Matrix2d M_X = Matrix2d::Ones(Inputs.size(),2);

    for(int i=0; i < Inputs.size();++i){
        Y_e(i) = Inputs[i].second;
        M_X(0,i) = Inputs[i].first;
    }

    Vector2d Theta_e = Vector2d::Ones(2);

    Theta_e =  (((M_X.transpose()*M_X).inverse())*(M_X.transpose()))*Y_e;

    Theta.first = Theta_e(0);
    Theta.second = Theta_e(1);
    
    return Theta; 
};
