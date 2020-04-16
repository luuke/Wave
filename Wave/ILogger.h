#ifndef ILogger_H
#define ILogger_H

class ILogger
{
public:
    virtual void Log(const char* string) = 0;
};

#endif //ILogger_H