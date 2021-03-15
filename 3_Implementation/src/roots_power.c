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
   //datatype 
sqrt_value = sqrt(input);
return sqrt_value;
   //returns the squareroot value of the input
}


//cuberoot function

double cuberoot(double input)
{
double cbrt_value;
   //datatype
cbrt_value = cbrt(input);
return cbrt_value;
   //returns the cuberoot of the input
}


//exponential function

double exponential(double input)
{
double exp_value;
   //datatype 
exp_value = exp(input);
return exp_value;
   //returns the exponential vallue of the given input
}
