#include <memory>
#include <vector>
#ifndef lrgDataCreatorI_H
#define lrgDataCreatorI_H

class DataImporterI {
    public:
    virtual std::vector<std::pair<double, double> > &GetData(std::vector<std::pair<double, double> >&X_Y) = 0;
};

#endif