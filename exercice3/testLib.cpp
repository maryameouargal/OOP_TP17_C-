#include <iostream>
#include "Logger.h"
#include "Config.h"

int main() {
    // 1) Log a message
    Logger::instance().log(" The Program  has started");
    std::cout << "Message written to journal.log" << std::endl;

    // 2) Read a key from the config file
    Config cfg;
    if (!cfg.load("config.txt")) {
        std::cout << "Could not open config.txt" << std::endl;
        return 1;
    }

    std::cout << "app_name = " << cfg.get("app_name") << std::endl;
    std::cout << "version  = " << cfg.get("version")  << std::endl;
    std::cout << "language = " << cfg.get("language") << std::endl;

    Logger::instance().log("Config loaded successfully");
    return 0;
}