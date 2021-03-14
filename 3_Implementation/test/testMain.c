#include "testMain.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}



int main()
{
UNITY_BEGIN();

rootTest();
testArithmetic();
testFactLog();



    return UNITY_END();
}