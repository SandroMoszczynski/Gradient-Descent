#include "lrgDataCreatorI.h"

class DataImporter : public DataImporterI {
    private:
    float theta_1;
    float theta_0;
    int len_array;
    public:
    DataImporter(float theta_1,float theta_0, int len_array);
    std::vector<std::pair<double, double> >&GetData(std::vector<std::pair<double, double> >&X_Y);
};


