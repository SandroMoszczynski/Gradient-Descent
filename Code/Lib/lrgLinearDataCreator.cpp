#include "lrgLinearDataCreator.h"
#include <vector>
#include <random>

// the inputs stated in the header file.

DataImporter::DataImporter(float _theta_1,float _theta_0,int _len_array)
{
    theta_1 = _theta_1;
    theta_0 = _theta_0; 
    len_array = _len_array;
}

std::vector<std::pair<double, double> >&DataImporter::GetData(std::vector<std::pair<double, double> >&X_Y){

// here we generate a class from <random> to act as out seed

    std::default_random_engine generator;

// this for loop takes the random seed and uses it to create an xcoordinate,this is then turned into a y coord through  -
// our y=mx+c stated in the header. each iteration creates a random point from the seed but with a normal distribution, -
// which is then appened to our x_y pair vector, as in the data loader file. 

    for(int i=0;i<100;++i){        
        std::uniform_int_distribution<int> distribution(0,len_array);
        float x_coord = distribution(generator);
        float y_coord = theta_1*x_coord + theta_0;
        X_Y.push_back(std::make_pair(x_coord,y_coord));
    };
    return X_Y;
};