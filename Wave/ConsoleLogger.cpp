#include <iostream>
#include "ConsoleLogger.h"

void ConsoleLogger::Log(const char* string)
{
    std::cout << string << std::endl;
}
