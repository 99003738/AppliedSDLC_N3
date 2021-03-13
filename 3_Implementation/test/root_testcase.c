#include "unity.h"
#include "roots_power.h"


/* Modify these two lines according to the project */
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */

void test_squareroot(void);
void test_cuberoot(void);
void test_exponential(void);


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
  
  RUN_TEST(test_squareroot);
  RUN_TEST(test_cuberoot);
  RUN_TEST(test_exponential);

  /* Close the Unity Test Framework */
  return UNITY_END();
}


void test_squareroot(void) {
  TEST_ASSERT_EQUAL(12, squareroot(144));
  TEST_ASSERT_EQUAL(10, squareroot(100));
  TEST_ASSERT_EQUAL(25, squareroot(625));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(10, squareroot(400));
}
void test_cuberoot(void) {
  TEST_ASSERT_EQUAL(2, cuberoot(8));
  TEST_ASSERT_EQUAL(3, cuberoot(27));
  TEST_ASSERT_EQUAL(4, cuberoot(64));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(10, squareroot(400));
}
void test_exponential(void) {
  TEST_ASSERT_EQUAL(2.7, exponential(1));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(10, squareroot(400));
}
