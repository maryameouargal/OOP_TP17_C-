#include "Config.h"
#include <fstream>

Config::Config() {
    // empty for now; user calls load()
}

bool Config::load(const std::string& filename) {
    std::ifstream in(filename);
    if (!in.is_open()) {
        return false;
    }

    entries.clear();
    std::string line;
    while (std::getline(in, line)) {
        // Skip empty lines and comments
        if (line.empty() || line[0] == '#') continue;

        std::size_t pos = line.find('=');
        if (pos == std::string::npos) continue;

        std::string key   = line.substr(0, pos);
        std::string value = line.substr(pos + 1);
        entries[key] = value;
    }
    return true;
}

std::string Config::get(const std::string& key) const {
    auto it = entries.find(key);
    if (it == entries.end()) return "<missing>";
    return it->second;
}