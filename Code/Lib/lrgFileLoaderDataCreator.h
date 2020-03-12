#include "lrgDataCreatorI.h"

// include the pure virtual interface class.
// create a data loader class from the data importer
// only requires one input into the constrcutor, note that this is where Xcode is having issues,    -
// it doesnt seem to want to accept std::string.

class DataLoader : public DataImporterI {
    private:
    std::string data_file;
    public:
    DataLoader( std::string data_file);
    std::vector<std::pair<double, double> >&GetData(std::vector<std::pair<double, double> >&Outputs);
};

// note: I had to add an extra input into the other classes, but decided to keep them here too,     -
// just incase a small vector was asked to be loaded or made. 