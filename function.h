//
//  Function.h
//  Control changer
//
//  Created by Anish shaji on 21/04/20.
//  Copyright © 2020 Anish shaji. All rights reserved.
//

#ifndef Function_h
#define Function_h
#include <iostream>
#include "max values.h"
#include "sensors.h"
void functions(void);
void functions()
{
    if (temp <= tempmax && aoa <= aoamax && speed <= speedmax && stall >= stallmin && rpm <= rpmmax)
    {
        std::cout <<"Manual Control\n";
    }
    else
    {
        std::cout <<"Controlled by Autopilot\n";
}
}
#endif /* Function_h */
