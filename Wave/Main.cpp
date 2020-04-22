#include <iostream>
#include "Application.h"
#include "DigitalOutput.h"
#include "Led.h"

int main(void)
{
    DigitalOutput output;
    Led led{ output };

    Application app{ led };
}