#include "ProcessorFactory.hpp"
#include "Processor.hpp"

using namespace std;

Processor* ProcessorFactory::createProcessor(const string& type) {
    if (type == "Text") {
        return new TextProcessor();
    } else if (type == "Numeric") {
        return new NumericProcessor();
    } else if (type == "Image") {
        return new ImageProcessor();
    }
    return nullptr; 
}

void ProcessorFactory::deleteProcessor(Processor* processor) {
    delete processor; 
}