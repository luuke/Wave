#include "Led.h"

Led::Led(IOutput& output)
    :output(output)
{
}

void Led::On(void)
{
    output.Set();
}

void Led::Off(void)
{
    output.Reset();
}
