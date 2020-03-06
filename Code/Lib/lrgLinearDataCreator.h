#include <vector>
#include <memory>
#include "lrgDataCreatorI.h"

class FileDataImporter : public DataImporter {
    public:
    FileDataImporter(const std::string& filename){}:
    ~FileDataImporter(){};
    public:
    void Startplaying(){};
    void Stopplaying(){}:
};


