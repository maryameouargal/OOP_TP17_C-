#include "Logger.h"

// Private constructor
Logger::Logger() {
    file.open("journal.log", std::ios::app);  
}

Logger& Logger::instance() {
    // Created on first call, destroyed when the program ends
    static Logger singleInstance;
    return singleInstance;
}

void Logger::log(const std::string& message) {
    if (file.is_open()) {
        file << "[LOG] " << message << std::endl;
    }
}