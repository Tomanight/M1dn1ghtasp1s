//
//  sensors.h
//  Control changer
//
//  Created by Anish shaji on 21/04/20.
//  Copyright © 2020 Anish shaji. All rights reserved.
//
#include <iostream>

#ifndef sensors_h
#define sensors_h

void temp(void);
void speed(void);
void rpm(void);
void aoa(void);
void stall(void);

void temp()
{
    std::cout << "enter TEMPERATURE in Kelvin:";
    int temp;
    std::cin >> temp;
}

void speed()
{
    std::cout << "enter SPEED in Knots:";
    int speed;
    std::cin >> speed;
}

void rpm()
{
    std:: cout << "enter RPM:";
    int rpm;
    std::cin >> rpm;
}

void aoa()
{
    std::cout << "enter ANGLE OF ATTACK in degrees:";
    int aoa;
    std::cin >> aoa;
}

void stall()
{
    std::cout << "enter STALL in Knots:";
    int stall;
    std::cin >> stall;
}

#endif /* sensors_h */
