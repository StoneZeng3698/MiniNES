#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

int main(int, char* [])
{
    auto console = spdlog::stdout_color_mt("console");
    console->info("Welcome to spdlog");
    console->info("An info message example {}..", 1);
    return 0;
}