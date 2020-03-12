#include "lrgDataCreatorI.h"

class DataLoader : public DataImporterI {
    private:
    char* data_file;
    public:
    DataLoader( char* data_file);
    std::vector<std::pair<double, double> >&GetData(std::vector<std::pair<double, double> >&Outputs);
};