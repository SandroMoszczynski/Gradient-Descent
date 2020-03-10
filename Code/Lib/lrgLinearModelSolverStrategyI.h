#include <memory>
#include <vector>

class DataImporterI {
    public:
    virtual std::pair<double, double> FitData(std::vector<std::pair<double, double> >)=0;
};