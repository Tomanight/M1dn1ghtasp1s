
//  main.cpp
//  Control changer
//
//  Created by Anish shaji on 21/04/20.
//  Copyright © 2020 Anish shaji. All rights reserved.
//

#include <iostream>
#include "max values.h"
#include "sensors.h"
#include "function.h"
using namespace std;
int main()
{
cout << "push button (1-ON and 0-OFF):";
    int a;
    cin >> a;
    if (a==1)
    {
        temp();
        aoa();
        speed();
        stall();
        rpm();
        tempmax();
        aoamax();
        speedmax();
        stallmin();
        rpmmax();
        functions();
        }
    else
    {
        cout <<"Controlled by Autopilot\n";
    }
     return 0;
}

