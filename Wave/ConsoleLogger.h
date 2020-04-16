#include "ILogger.h"

class ConsoleLogger : public ILogger
{
public:
    virtual void Log(const char* string);
};

