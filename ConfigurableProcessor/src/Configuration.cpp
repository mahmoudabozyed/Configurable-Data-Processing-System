#include "Configuration.hpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Configuration::Configuration(const string& filePath) {
    parseConfigurationFile(filePath);
}
void Configuration::parseConfigurationFile(const string& filePath) {
    ifstream file(filePath);
    if (!file.is_open()) {
        throw runtime_error("Failed to open configuration file.");
    }

    string line;
    while (getline(file, line)) {
        size_t delimiterPos = line.find('=');
        if (delimiterPos != string::npos) {
            string key = line.substr(0, delimiterPos);
            string value = line.substr(delimiterPos + 1);
            configData.push_back(make_pair(key, value));
        }
    }
}

string Configuration::getValue(const string& key) const {
    for (const auto& pair : configData) {
        if (pair.first == key) {
            return pair.second;
        }
    }
    return ""; 
}