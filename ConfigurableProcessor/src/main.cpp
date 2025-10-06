#include "ProcessorFactory.hpp"
#include "Configuration.hpp"
#include <iostream>

using namespace std;
int main() {
    try {
        Configuration config("config/settings.txt");
        string processorType = config.getValue("Processor.Options.Type");
        Processor* processor = ProcessorFactory::createProcessor(processorType);
        if (processor) {
            processor->process("Sample Data");
            ProcessorFactory::deleteProcessor(processor);
        } else {
            cerr << "Unsupported processor type: " << processorType << endl;
        }
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}