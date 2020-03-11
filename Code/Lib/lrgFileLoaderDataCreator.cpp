#include "lrgFileLoaderDataCreator.h"
#include <vector>
#include <random>
#include <fstream>

DataLoader::DataLoader(std::string _data_file)
{
    data_file = _data_file;
}

std::vector<std::pair<double, double> >&DataLoader::GetData(std::vector<std::pair<double, double> >&Outputs){

    std::vector<std::string> words;
    if(std::ifstream in {data_file})
    {
        std::string Outputs;
        while(in >> word)
        {
            words.push_back(word);
        }
    }
    else
    {
        //couldn't open file
    }

    return Outputs

};