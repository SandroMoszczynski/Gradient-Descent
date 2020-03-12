#include "lrgLinearDataCreator.h"
#include "lrgNormalEquationSolverStrategy.h"
#include "lrgGradientDescentSolverStrategy.h"
#include "lrgFileLoaderDataCreator.h"
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[])
{
  if (argc != 3){
        std::cerr << "Usage: " << argv[0] << " <SOLVER_TYPE> <DATA_TYPE> \n"
              << "<SOLVER_TYPE>:\n"
              << "Pick whether to use <BATCH> gradient <NORMAL> gradient\n"
              << "<DATA_TYPE>: \n"
              << "Use <IMPORT> to use import data \n"
              << "Use <GENERATE> to generate data. \n"
              << std::endl;
     return 1;
  }

  std::vector<std::pair<double, double> >Data;

  if (std::string(argv[2]) == "IMPORT"){
    std::string filename;
    std::cout << "Please input filename:" << std::endl;
    std::cin >> filename;
    DataLoader LoadData(filename);
    Data = LoadData.GetData(Data);
    std::cout << "Get Data completed."<< std::endl;
  }
  else if (std::string(argv[2]) == "GENERATE"){
    float Theta_1;
    float Theta_0;
    int No_points;
    std::cout << "Please input Theta_1:"<< std::endl;
    std::cin >> Theta_1;
    std::cout << "Please input Theta_0:"<< std::endl;
    std::cin >> Theta_0;
    std::cout << "Please input Number of points in data pool:"<< std::endl;
    std::cin >> No_points;
    DataImporter DataCreator(Theta_1,Theta_0,No_points);
    std::vector<std::pair<double, double> >Data;
    std::cout << "Get Data completed."<< std::endl;
  }
  else {
    std::cout << "Please check you are using either <IMPORT> or <GENERATE> for variable 2.\n";
  }
  
  if (std::string(argv[1]) == "NORMAL"){
    DataSolver Normal_solver;
    std::pair<double, double>Results;
    Results = Normal_solver.FitData(Data,Results);
    std::cout << "Theta_1: " << Results.first << std::endl;
    std::cout << "Theta_0: " << Results.second << std::endl;
  }
  else if (std::string(argv[1]) == "BATCH"){
    float Eta;
    int Iterations;
    float Batch_size;
    std::cout << "Please input Eta:"<< std::endl;
    std::cin >> Eta;
    std::cout << "Please input Iterations:"<< std::endl;
    std::cin >> Iterations;
    std::cout << "Please input size of batch:"<< std::endl;
    std::cin >> Batch_size;
    GradientSolver Gradient_solver(Eta,Iterations,Batch_size);
    std::pair<double, double>Results;
    Results = Gradient_solver.FitData(Data,Results);
    std::cout << "Theta_1: " << Results.first << std::endl;
    std::cout << "Theta_0: " << Results.second << std::endl;
  }
  else {
    std::cout << "Please check you are using either <NORMAL> or <BATCH> \t for variable 1.\n";
  }
    return 0;
};