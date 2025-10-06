#include "Processor.hpp"
#include <iostream>

using namespace std;

void TextProcessor::process(const string& data) {
    cout << "TextProcessor processing: " << data << endl;
}

void NumericProcessor::process(const string& data) {
    cout << "NumericProcessor processing: " << data << endl;
}

void ImageProcessor::process(const string& data) {
    cout << "ImageProcessor processing: " << data << endl;
}