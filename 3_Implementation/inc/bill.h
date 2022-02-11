#ifndef __BILL_H__
#define __BILL_H__
#include <stdio.h>

struct bill
{
    int units;
    int prev_reading;
    int cur_reading;
    float fixed_charges;
    float ED_charges;
    char group;
};

#endif