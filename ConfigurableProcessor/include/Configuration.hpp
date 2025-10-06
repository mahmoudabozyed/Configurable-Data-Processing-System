#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <string>
#include <vector>

using namespace std;

class Configuration {
public:
    Configuration(const string& filePath);
    string getValue(const string& key) const;

private:
    vector<pair<string, string>> configData;
    void parseConfigurationFile(const string& filePath);
};

#endif 