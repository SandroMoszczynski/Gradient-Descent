#include <memory>
#include <vector>

class DataSolverI {
    public:
    virtual std::pair<double, double> FitData(std::vector<std::pair<double, double> >) = 0;
};