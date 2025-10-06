#ifndef PROCESSORFACTORY_HPP
#define PROCESSORFACTORY_HPP

#include "Processor.hpp"
#include <string>

using namespace std;

class ProcessorFactory {
public:
    static Processor* createProcessor(const string& type);
    static void deleteProcessor(Processor* processor);
};

#endif 