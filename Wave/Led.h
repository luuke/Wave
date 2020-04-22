#ifndef Led_H
#define Led_H

#include "ILed.h"
#include "IOutput.h"

class Led : public ILed
{
public:
    Led() = delete;
    Led(IOutput& output);

    void On(void);
    void Off(void);

private:
    IOutput& output;
};

#endif //Led_H
