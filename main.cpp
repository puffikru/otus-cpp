#include <iostream>
#include "lib.h"

//#include <spdlog/spdlog.h>

int main()
{
//    auto logger = spdlog::stdout_logger_mt("console");
//    logger->info("version {} was started", version());
    std::cout << "build " << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
