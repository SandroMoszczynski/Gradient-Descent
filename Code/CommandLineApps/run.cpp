#include "lrgLinearDataCreator.h"
#include "lrgNormalEquationSolverStrategy.h"
#include <iostream>
#include <vector>
#include <string>


int main(){

  DataImporter test5_1(1,0,100);
  std::vector<std::pair<double, double>> var5_1;
  test5_1.GetData(var5_1);
  DataSolver test5_2;  
  std::pair<double, double>var5_2;
  var5_2 = test5_2.FitData(var5_1,var5_2);
    //for(int i=0; i < var5_2.size();++i){
     //    std::cout << var5_2[i].first << std::endl; 
      //   std::cout << var5_2[i].second << std::endl;
    // }

    std::cout << var5_2.first << std::endl; 
    return 0;
};