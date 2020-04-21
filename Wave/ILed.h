#ifndef ILed_H
#define ILed_H

class ILed
{
public:
    virtual void On(void) = 0;
    virtual void Off(void) = 0;
};

#endif //ILed_H
