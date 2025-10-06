#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <string>
#include <vector>

using namespace std;
class Processor {
public:
    virtual ~Processor() = default;
    virtual void process(const string& data) = 0;
};

class TextProcessor : public Processor {
public:
    void process(const string& data) override;
};
class NumericProcessor : public Processor {
public:
    void process(const string& data) override;
};

class ImageProcessor : public Processor {
public:
    void process(const string& data) override;
};

#endif 