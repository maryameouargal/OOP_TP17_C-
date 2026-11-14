#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <map>

class Config {
private:
    std::map<std::string, std::string> entries;

public:
    Config();

    // Load configuration from a file
    bool load(const std::string& filename);

    // Return the value for a key, or "<missing>" if not found
    std::string get(const std::string& key) const;
};

#endif