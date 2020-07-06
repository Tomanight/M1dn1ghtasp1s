//
//  max values.h
//  Control changer
//
//  Created by Anish shaji on 21/04/20.
//  Copyright © 2020 Anish shaji. All rights reserved.
//

#ifndef max_values_h
#define max_values_h
#include<iostream>

void tempmax(void);
void aoamax(void);
void rpmmax(void);
void speedmax(void);
void stallmin(void);

void tempmax()
{
    int tempmax;
    tempmax = 920; //temperature of aircraft in KELVIN
}
void aoamax()
{
    int aoamax;
    aoamax = 20; //angle of attack of the aircraft in degrees
}
void speedmax()
{
    int speedmax;
    speedmax = 490; //speed of aircraft in knots
}
void stallmin()
{
    int stallmin;
    stallmin = 105; //stall of boeing 787b dreamliner in knots
}
void rpmmax()
{
    int rpmmax;
    rpmmax = 12500; //max rpm of 787 engines( trent 1000)
}

#endif /* max_values_h */
