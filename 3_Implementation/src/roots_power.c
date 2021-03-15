#include "roots_power.h"//mention .h file


/*int main()
{
   static double result;
    do
    {
    int select_option;
     double input;
      printf("Please choose only one option for special math functions:\n");//choose the operations
     printf(" 1. squareroot calculation\n");//operations
     scanf("%d",&select_option);
     switch(select_option)//using switch case
 {
    case 1 :
     printf("Please enter the input value:\n");
     scanf("%lf",&input);
     result = squareroot(input);
     printf("squareroot of %lf is %.2f\n",input,result);
     break;
    default:
    printf("Invalid input!!! Please choose the correct option\n");
    break;
 }
}while(1);
}*/

//squareroot function
double squareroot(double input)
{
double sqrt_value;
sqrt_value = sqrt(input);
return sqrt_value;
}



double cuberoot(double input)//cuberoot function
{
double cbrt_value;
cbrt_value = cbrt(input);
return cbrt_value;
}

double exponential(double input)//exponential function
{
double exp_value;
exp_value = exp(input);
return exp_value;
}
