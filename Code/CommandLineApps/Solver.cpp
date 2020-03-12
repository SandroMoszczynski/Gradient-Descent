#include "lrgLinearDataCreator.h"
#include "lrgNormalEquationSolverStrategy.h"
#include "lrgGradientDescentSolverStrategy.h"
#include "lrgFileLoaderDataCreator.h"
#include <iostream>
#include <vector>
#include <string>


int main(){
  std::string filepath;
  std::cin >>filepath;
  DataLoader loadertest(filepath);
  std::vector<std::pair<double, double>> vardataloader;
  vardataloader = loadertest.GetData(vardataloader);
  DataSolver testdata1;
  std::pair<double, double>resultsdata1;
  resultsdata1 = testdata1.FitData(vardataloader,resultsdata1);
  std::cout << resultsdata1.first << std::endl;
  std::cout << resultsdata1.second << std::endl;
    return 0;
};
