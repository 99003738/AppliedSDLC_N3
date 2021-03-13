#include "unity.h"
#include <f.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

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
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, addition(10, 20));
  TEST_ASSERT_EQUAL(-10, addition(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(8250, addition(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(7, subtraction(10, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtraction(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(10, multiplication(1, 10));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiplication(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(5, division(25, 5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, division(2, 2));
}
