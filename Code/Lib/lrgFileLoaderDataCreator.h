#include "lrgDataCreatorI.h"

class DataLoader : public DataImporterI {
    private:
    std::string data_file;
    public:
    DataImporter(std:string data_file);
    std::vector<std::pair<double, double> >GetData();