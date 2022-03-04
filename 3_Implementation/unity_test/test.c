#include "unity.h"
/*#include "unity_internals.h"*/
#include "bill.h"
#include "tarrif.h"
 

#define PROJECT_NAME "ElectricitytarrifCalc"

/* Prototypes for all the test functions */

void test_tarrif_calc(void);


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
/* Write all the test functions for calculation */ 
void test_tarrif_calc()
 {
     int prev_readings=200;
     int cur_readings=300;
     int tax=10;
     int group=1;
  TEST_ASSERT_EQUAL(214.50, tarrif_calc());
 }

/* Write all the test functions for Urban Area 
 void test_UrbanArea(void)
 {
     float units_consumed=50;
  TEST_ASSERT_EQUAL(235, UrbanArea(235));
 }

/* Start of the application test */
int testmain()
{

  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  RUN_TEST(test_tarrif_calc);
 
/* Close the Unity Test Framework */
  return UNITY_END();
}