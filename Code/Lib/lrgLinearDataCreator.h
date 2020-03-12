#include "lrgDataCreatorI.h"

// data importer requires a theta pair to make its data, as it is based on y=mx+c there theta_0 = c and theta_1 = m

class DataImporter : public DataImporterI {
    private:
    float theta_1;
    float theta_0;
    int len_array;
    public:
    DataImporter(float theta_1,float theta_0, int len_array);
    std::vector<std::pair<double, double> >&GetData(std::vector<std::pair<double, double> >&X_Y);
};


