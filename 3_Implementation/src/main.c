#include "bill.h"
int main()
{
    int units;
    int prev_reading, cur_reading;
    float Sur_Charges, customer_charges, per_unit_charge, Energy_charges, fixed_charges, ED_charges;
    char group;
    double Bill_amount;
    //scanf("%d", &units);
    printf("\t\t\t\t\t\tWelcome to Tariff calculation\n\n\n");
    printf("Enter Previous reading\n");
    scanf("%d", &prev_reading);
    printf("Enter the Current reading\n");
    scanf("%d", &cur_reading);
    printf("Enter fixed chargers = 50 \n");
    scanf("%f", &fixed_charges);
    printf("Enter the Ed charges = 40\n");
    scanf("%f", &ED_charges);
    printf("Enter the which group are you (A or B or C)\n");
    getchar();
    scanf("%c", &group);
    units = cur_reading - prev_reading;
    //printf("%d\n", units);
    if (group == 'A')
    {
        if (units > 0 || units < 50)
        {
            per_unit_charge = 1.45;

            Energy_charges = units * per_unit_charge;
            customer_charges = 25;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 51 || units < 75)
        {
            per_unit_charge = 2.60;
            //Energy_charges = units * per_unit_charge;
            customer_charges = 30;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else
            group = 'B';
    }

    else if (group == 'B')
    {
        if (units > 0 || units < 100)
        {
            per_unit_charge = 2.60;
            Energy_charges = units * per_unit_charge;
            customer_charges = 35;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 101 || units < 200)
        {
            per_unit_charge = 3.60;
            Energy_charges = units * per_unit_charge;
            customer_charges = 45;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 201 || units < 225)
        {
            per_unit_charge = 6.90;
            Energy_charges = units * per_unit_charge;
            customer_charges = 50;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else
            group = 'C';
    }

    else if (group == 'C')
    {
        if (units > 0 || units < 50)
        {
            per_unit_charge = 2.65;
            Energy_charges = units * per_unit_charge;
            customer_charges = 35;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 51 || units < 100)
        {
            per_unit_charge = 3.35;
            Energy_charges = units * per_unit_charge;
            customer_charges = 40;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 101 || units < 200)
        {
            per_unit_charge = 5.40;
            Energy_charges = units * per_unit_charge;
            customer_charges = 45;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 201 || units < 300)
        {
            per_unit_charge = 7.10;
            Energy_charges = units * per_unit_charge;
            customer_charges = 50;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 301 || units < 400)
        {
            per_unit_charge = 7.95;
            Energy_charges = units * per_unit_charge;
            customer_charges = 50;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else if (units > 401 || units < 500)
        {
            per_unit_charge = 8.50;
            Energy_charges = units * per_unit_charge;
            customer_charges = 55;
            Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
            printf("%lf", Bill_amount);
        }
        else
            per_unit_charge = 9.95;
        Energy_charges = units * per_unit_charge;
        customer_charges = 55;
        Bill_amount = Energy_charges + fixed_charges + customer_charges + ED_charges;
        printf("%lf", Bill_amount);
    }
    else
        return 1;
    return 0;
}