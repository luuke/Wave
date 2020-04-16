#include <iostream>
#include "ConsoleLogger.h"

int main(void)
{
    std::cout << "Hello World!" << std::endl;

    ILogger *logger = new ConsoleLogger();
    logger->Log("asd");

    ConsoleLogger consoleLogger;
    logger->Log("console");
}