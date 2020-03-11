#include "catch.hpp"
#include "lrgCatchMain.h"
#include "lrgLinearDataCreator.h"
#include "lrgNormalEquationSolverStrategy.h"
#include "lrgGradientDescentSolverStrategy.h"
#include <iostream>
#include <vector>

TEST_CASE( "create a class for DataImporter", "[Linear Data Creator]") {
  DataImporter test1(5,5,5);
  std::vector<std::pair<double, double> >var1;
  test1.GetData(var1);
    REQUIRE( var1[0].first == 0);
}

TEST_CASE( "check size of returned X_Y", "[Linear Data Creator]") {
   DataImporter test2(1,1,100);
   std::vector<std::pair<double, double> >var2;
   test2.GetData(var2);
     REQUIRE(var2.size() == 100);
 }

TEST_CASE( "check mean of X_Y", "[Linear Data Creator]") {
   DataImporter test3(1,0,100);
   std::vector<std::pair<double, double> >var3;
   test3.GetData(var3);
   int avg;
   int sumTotal = 0;
     for(int k=0; k < 100; ++k){
         sumTotal += var3[k].first;
     }
     avg = sumTotal / var3.size();
     REQUIRE(avg == 51);
}

TEST_CASE( "create a class for DataSolver", "[Normal Equation Solver]") {
  std::vector<std::pair<double, double> > var4_1;
  DataSolver test4_1;  
  std::pair<double, double>var4_2;
  test4_1.FitData(var4_1,var4_2); 
   REQUIRE( var4_2.first == 0);
}

TEST_CASE( "test results for solver", "[Normal Equation Solver]") {
  DataImporter test5_1(1,0,100);
  std::vector<std::pair<double, double> >var5_1;
  test5_1.GetData(var5_1);
  DataSolver test5_2;  
  std::pair<double, double>var5_2;
  var5_2 = test5_2.FitData(var5_1,var5_2);
   REQUIRE(var5_2.first != 0);
}

TEST_CASE( "test results for gradient solver", "[Gradient Equation Solver]") {
  DataImporter test6_1(1,0,100);
  std::vector<std::pair<double, double> >var6_1;
  test6_1.GetData(var6_1);
  GradientSolver test6_2(1,1,50);  
  std::pair<double, double>var6_2;
  var6_2 = test6_2.FitData(var6_1,var6_2);
   REQUIRE(var6_2.first != 0);
}