#include "lrgLinearDataCreator.h"
#include <vector>

// create a for loop where i read each part of a text file and append it to a list

int main(){
    double *Y, *Data;
    int noise;
    int theta_0;
    int theta_1 ;
    int i;
    
    std::vector<int> X(100);   // defined a vector of size 100


    theta_0 = 5;
    theta_1 = 5;
    noise = 5;


    for(i=1;i=100;i++){
        Data[i]= theta_1*X[i] + theta_0 + noise;
    }

    Y = Data;

    return 0;
}



