#include "unity.h"
#include "fact_log.h"

//#include<dim.h>
//#include<trignometic.h>


/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
//void trig_choose();
void fact_test1();
void fact_test2();
void fact_test3();
void log_test();
void log_test2();
void log_test3();
void log_test4();
void log_test5();
void log_test6();



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(trig_choose);
  RUN_TEST(fact_test1);
  RUN_TEST(fact_test2);
  RUN_TEST(fact_test3);
  RUN_TEST(log_test);
  RUN_TEST(log_test2);
  RUN_TEST(log_test3);
  RUN_TEST(log_test4);
  RUN_TEST(log_test5);
  RUN_TEST(log_test6);
          
    
 
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
//void trig_choose(void) {
  //TEST_ASSERT_EQUAL(0.5, sine(30));
//}
void fact_test1(void)
{

  TEST_ASSERT_EQUAL(120, factorial(5));


}
void fact_test2(void)
{

 TEST_ASSERT_EQUAL(6, factorial(3));
}

void fact_test3(void)
{
  TEST_ASSERT_EQUAL(0, factorial(-5));
}

void log_test(void)
{
  TEST_ASSERT_EQUAL(1, product(1,10));
}

void log_test2(void)
{
  TEST_ASSERT_EQUAL(-0.07918124604, ratios(5,6));
}

void log_test3(void)
{
  TEST_ASSERT_EQUAL(0, ratios(0,6));
}

void log_test4(void)
{
  TEST_ASSERT_EQUAL(0, product(6,0));
}

void log_test5(void)
{
  TEST_ASSERT_EQUAL(0, ratios(-6,0));
}

void log_test6(void)
{
  TEST_ASSERT_EQUAL(0, product(-9,0));
}
