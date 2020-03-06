#include <memory>
#include <vector>
class DataPlayerI {
    public:
    virtual std::vector<std::pair<double, double> > GetData() = 0;
};