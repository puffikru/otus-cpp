#include <iostream>
#include "lib.h"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_sinks.h>
//#include </usr/local/include/spdlog/sinks/stdout_sinks.h>
///usr/local/include/spdlog/sinks/stdout_sinks.h

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());
    std::cout << "build " << version() << '\n';
    std::cout << "Hello, world!";
    return 0;
}

//export LDFLAGS="-L/usr/local/Cellar/spdlog/1.4.2/include"

//echo "deb http://dl.bintray.com/puffikru/otus-cpp xenial main" | tee -a /
//
// etc/apt/sources.list.d/otus.list


//echo "deb https://dl.bintray.com/puffikru/otus-cpp xenial main" | sudo tee -a /etc/apt/sources.list