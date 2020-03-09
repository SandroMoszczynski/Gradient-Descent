#include "lrgLinearDataCreator.h"
#include <vector>
#include <random>

DataImporter::DataImporter(float _theta_1,float _theta_0,int _len_array)
{
    theta_1 = _theta_1;
    theta_0 = _theta_0; 
    len_array = _len_array;
}

std::vector<std::pair<double, double> >DataImporter::GetData(){

    int i; 
    i = 0; 

    std::vector<std::pair<double, double> >X_Y;
    std::default_random_engine generator;

    for(i=0;i=100;i++){        
        std::uniform_int_distribution<int> distribution(0,len_array);
        float x_coord = distribution(generator);
        float y_coord = theta_1*x_coord + theta_0;
        X_Y.push_back(std::make_pair(x_coord,y_coord));
    }
    return X_Y;
};



