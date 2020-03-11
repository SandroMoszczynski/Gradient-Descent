#include "lrgLoaderDataCreator.h"
#include <vector>
#include <random>

DataLoader::DataLoader(std:string _data_file)
{
    data_file = _data_file;
}

std::vector<std::pair<double, double> >DataLoader::GetData(){};