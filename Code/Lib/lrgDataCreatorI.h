#include <memory>
#include <vector>
class DataImporterI {
    public:
    virtual std::vector<std::pair<double, double> > &GetData(std::vector<std::pair<double, double> >&X_Y) = 0;
};