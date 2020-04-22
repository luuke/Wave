#ifndef Application_H
#define Application_H

#include "ILed.h"

class Application
{
public:
    Application() = delete;
    Application(ILed& led);

private:
    ILed &Led;
};

#endif //Application_H
