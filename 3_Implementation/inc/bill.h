#ifndef __BILL_H__
#define __BILL_H__
#include <stdio.h>
#include<string.h>

struct bill
{
   
    int prev_reading;
    int cur_reading;
    float fixed_charges;
    float ED_charges;
    int group;
    int state;
    int G_tax;
    
};
struct bill B;
#endif