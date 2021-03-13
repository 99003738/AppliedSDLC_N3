#include"fact_log.h"



//Logarithm Product Function

float product(float a, float b)
{
    if(a==0)
    {
      return 0;
    }
    else if(b==0)
    {
      return 0;
    }
    else if(a<0)
    {
      return 0;
    }
    else if(b<0)
    {
      return 0;
    }
    else
    {
      double result;
      result=log10(a)+log10(b);
      return result;
    }
}

                //Logarithm Ratios Function
float ratios(float a, float b) 
{
    if(a==0)
    {
      
       return 0;
    }
    else if(b==0)
    {
        return 0;
    }
    else if(a<0)
    {
        return 0;
    }
    else if(b<0)
    {
        return 0;
    }
    else
    {
        double result;
        result=log10(a)-log10(b);
        return result;
    }
}
              //Factorial Function

int factorial(int n)
{
    int i,fact=1;
    
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return 0;
    }
    else
    {
        for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
        return fact;
    }
}
