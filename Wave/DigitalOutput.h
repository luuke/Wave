#ifndef DigitalOutput_H
#define DigitalOutput_H

#include "IOutput.h"

class DigitalOutput : public IOutput
{
public:
    DigitalOutput();
    
    virtual void Set(void);
    virtual void Reset(void);
};

#endif //DigitalOutput_H
