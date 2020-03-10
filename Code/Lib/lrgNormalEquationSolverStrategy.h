#include "lrgLinearModelSolverStrategyI.h"

class DataImporter : public DataImporterI {
    public:
    // DataImporter(float theta_1,float theta_0, int len_array);
    std::pair<double, double> FitData(std::vector<std::pair<double, double> >)
};