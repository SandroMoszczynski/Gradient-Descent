#include "lrgFileLoaderDataCreator.h"
#include <vector>
#include <random>
#include <fstream>
#include <string>

DataLoader::DataLoader(std::string _data_file)
{
    data_file = _data_file;
}

std::vector<std::pair<double, double> >&DataLoader::GetData(std::vector<std::pair<double, double> >&Outputs){

    std::vector<std::string> import_data;

    std::string line;
    std::ifstream myfile (data_file);
    if (myfile.is_open())
    {
        while ( myfile.good() )
        {
        getline (myfile,line);
        }
        myfile.close();
    }
    
    return Outputs;
};