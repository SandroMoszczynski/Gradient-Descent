#include <memory>
#include <vector>
#ifndef lrgDataCreatorI_H
#define lrgDataCreatorI_H

// this creates the pure virtual interface class for data creator and importer.
// the #fndef and #define are needed if overloading the class in this way.
// & used in order return outputs later on, less so for the large data creations of this    -
// class, but are very much needed for the later classes where only 2 outputs are asked     -
// for. The outputs would be destroyed before the return is called otherwise.

class DataImporterI {
    public:
    virtual std::vector<std::pair<double, double> > &GetData(std::vector<std::pair<double, double> >&X_Y) = 0;
};

#endif