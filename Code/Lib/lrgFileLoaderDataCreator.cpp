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

std::vector<std::pair<double, double> >&DataLoader::GetData(std::vector<std::pair<double, double> >&Outputs){

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

    for (int i = 0; i < import_data.size();i++){
        std::stringstream ss(import_data[i]);
        double d1,d2;
        ss >> d1 >> d2;
        Outputs.push_back(std::make_pair(d1,d2));
    }  
    return Outputs;
};