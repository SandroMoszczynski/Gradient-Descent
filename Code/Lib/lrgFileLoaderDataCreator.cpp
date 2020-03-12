#include "lrgFileLoaderDataCreator.h"
#include <vector>
#include <random>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

DataLoader::DataLoader(std::string _data_file)
{
    data_file = _data_file;
}

// above; the data loader class is called and instantiated
// below: the method for data loader, get data is given;

std::vector<std::pair<double, double> >&DataLoader::GetData(std::vector<std::pair<double, double> >&Outputs){

// create a new input to add the data that will be read to

    std::vector<std::string> import_data;
    static char buff[128];

    std::ifstream impfile(data_file);
    if (impfile.is_open())
    {
        std::cout << "File openned" << std::endl;
        while (impfile.good()){
            impfile.getline(buff,sizeof(buff));
            import_data.push_back(buff);
        }
        impfile.close();
    }
    else std::cerr << "!!UNABLE TO OPEN FILE!!" << std::endl;

// above; added a message to show why theta would not compute properly, aswell as one to show when it is openned.
// below; this converts the string of data from the file read to 2 double outputs and then combines them into   -
// a pair, as Outputs requires. 

    for (int i = 0; i < import_data.size();i++){
        std::stringstream ss(import_data[i]);
        double d1,d2;
        ss >> d1 >> d2;
        Outputs.push_back(std::make_pair(d1,d2));
    }  
    return Outputs;
};