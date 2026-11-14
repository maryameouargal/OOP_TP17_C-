#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>

class Logger {
private:
    std::ofstream file;          
    Logger();                    // private

public:
    static Logger& instance();   

    void log(const std::string& message);

    // Prevent copying (a singleton has no copies!)
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
};

#endif
