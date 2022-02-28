#include "bill.h"
#include"State_tax.h"
#include"tarrif.h"

int main()
{
   //#if 0
    printf("\t\t\t\t\t\t***Welcome to Tariff calculation***\n\n\n");
    printf("Select state\n");
    printf("1.AP/TS		7.gujarat	 13.kerala              19.punjab\n");
    printf("2.Assam		8.haryana	 14.madhyapradesh	20.rajastan\n");
    printf("3.Bihar		9.himachal	 15.maharastra		21.tamilnadu\n");
    printf("4.chandigarh    10.J&K		 16.manipur             22.uttarakand\n");
    printf("5.delhi		11.jharkand	 17.meghalaya           23.UP\n");
    printf("6.goa		12.karnataka     18.orissa              24.West bengal\n25.others\n");
    printf("please select the serial number of your state = ");
    scanf("%d", &B.state);
   int units;
    int prev_reading, cur_reading;
    float Sur_Charges, customer_charges, per_unit_charge, Energy_charges, fixed_charges, ED_charges;
    int group;
    printf("Enter Previous reading\n");
    scanf("%d", &B.prev_reading);
    printf("Enter the Current reading\n");
    scanf("%d", &B.cur_reading);
    printf("Enter the which group are you\n (1.Domestic \n 2.Non-Domestic)\n");
    scanf("%d", &B.group);
    units = cur_reading - prev_reading; 
    /*int tax=Tax_rate(state,group);*/
    /*#else
    void test_tarrif_calc();*/
    
   switch (B.group)
		{
		case 1:
            DTax_rate();
			tarrif_calc();
			break;
		case 2:
            NDTax_rate();
			tarrif_calc();
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("Please Contact the helpline");
			printf("Electricity Board Helpline: 1800425155333 (or) 1912.\n");
		}
        //#endif
   return 0;
}
    