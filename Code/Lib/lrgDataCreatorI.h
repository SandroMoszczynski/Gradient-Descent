#include <memory>
#include <vector>
class DataImporter {
    public:
    virtual std::vector<std::pair<double, double> > GetData() = 0;
};