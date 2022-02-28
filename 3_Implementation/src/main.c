#include"bill.h"

   
void tarrif_calc()
{
    int tax=B.G_tax;
    double Bill_amount;
    float Sur_Charges, per_unit_charge, Energy_charges, ED_charges;
    int fixed_charges;
    int units = B.cur_reading-B.prev_reading;

    if (B.group == 1)
    {
        //printf("0");
        printf("The Domestic tax imposed in your state = %d\n",tax);
        printf("\n**The total bill to be paid is ");
    	fixed_charges=50;
    	per_unit_charge = 1.45;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f", Bill_amount);
           
    	
    }
      

   else if (B.group == 2)
    {
    	printf("\nThe Non-Domestic tax imposed in your state = %d\n",tax);
         printf("\n**The total bill to be paid is ");
    	fixed_charges=120;
        if (units >= 0 && units <= 50)
        {
           // printf("1");
            per_unit_charge = 2.65;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f\n", Bill_amount);
           
        }
        else if (units >= 51 && units <= 100)
        {
        	//printf("2");
            per_unit_charge = 3.35;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f\n", Bill_amount);
            
        }
        else if (units >= 101 && units <= 200)
        {
        	//printf("3");
            per_unit_charge = 5.40;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f\n", Bill_amount);
           
        }
        else if (units >= 201 && units <= 300)
        {
        	//printf("4");
            per_unit_charge = 7.10;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f\n", Bill_amount);
            
        }
        else if (units >= 301 && units <= 400)
        {
        	//printf("5");
            per_unit_charge = 7.95;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f\n", Bill_amount);
           
        }
        else if (units >= 401 && units <= 500)
        {
        	//printf("6");	
            per_unit_charge = 8.50;
            Energy_charges = units * per_unit_charge;
            ED_charges= (Energy_charges+fixed_charges)*tax/100;
            Bill_amount = Energy_charges + fixed_charges + ED_charges;
            printf("%.2f\n", Bill_amount);
            
        }
        else
       //printf("7");
        per_unit_charge = 9.95;
        Energy_charges = units * per_unit_charge;
        ED_charges= (Energy_charges+fixed_charges)*tax/100;
        Bill_amount = Energy_charges + fixed_charges + ED_charges;
        printf("%.2f\n", Bill_amount);
        
    }
    else
        {
        printf("issue with the inputs");
       
        }
        
    
}