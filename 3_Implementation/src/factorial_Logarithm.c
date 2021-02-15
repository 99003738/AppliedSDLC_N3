#include <stdio.h> 
#include <math.h>
#include <calculator_operations.h>

          //Logarithm Product Function

void product(int a, int b)
{
    if(a==0)
    {
        printf("ERROR");
    }
    else if(b==0)
    {
        printf("ERROR");
    }
    else
    {
          double result;
          result=log(a)+log(b);
          printf("result of product is=%d ",result); 
    }
}

                //Logarithm Ratios Function

void ratios(int a, int b) 
{
    if(a==0)
    {
        printf("ERROR");
    }
    else if(b==0)
    {
        printf("ERROR");
    }
    
     else
    {
        double result;
        result=log(a)-log(b);
        printf("result of ratios is=%d ",result); 
    }
}
              //Factorial Function

void factorial(int n)
{
    int i,fact=1;
    
    if(n==1)
    {
	
    printf("Factorial of a number is 1");
    
    }
    else
    {
	
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of a number is= %d",fact);
    }

}
                    // Main Function

int fact_input(void);
{

    int num;
    
    // Passing parameters 
    printf("Enter the number for factorial : ");
    scanf(" %d",num);
    factorial(num);

    return 0; 
}