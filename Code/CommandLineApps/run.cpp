#include "lrgLinearDataCreator.h"
#include "lrgNormalEquationSolverStrategy.h"
#include "lrgGradientDescentSolverStrategy.h"
#include "lrgFileLoaderDataCreator.h"
#include <iostream>
#include <vector>
#include <string>


int main(){

  DataLoader loadertest("TestData1.txt");
  std::vector<std::pair<double, double>> vardataloader;
  loadertest.GetData(vardataloader);
  std::cout << vardataloader[0].first << std::endl; 
    return 0;
};




  // DataImporter test5_1(1,0,100);
  // std::vector<std::pair<double, double>> var5_1;
  // test5_1.GetData(var5_1);
  // DataSolver test5_2;  
  // GradientSolver test5_3(1,1,50);
  // std::pair<double, double>var5_2;
  // std::pair<double, double>var5_3;
  // std::pair<double, double>var5_4;
  // var5_2 = test5_2.FitData(var5_1,var5_3);
  // var5_4 = test5_3.FitData(var5_1,var5_3);
  //   //for(int i=0; i < var5_2.size();++i){
  //    //    std::cout << var5_2[i].first << std::endl; 
  //     //   std::cout << var5_2[i].second << std::endl;
  //   // }

  //   std::cout << var5_2.first << std::endl;
  //   std::cout << var5_2.first << std::endl; 
  //   std::cout << var5_3.first << std::endl;
  //   std::cout << var5_3.first << std::endl; 

  

