#include <memory>
#include <vector>
class DataImporterI {
    public:
    virtual std::vector<std::pair<double, double> > GetData() = 0;
};