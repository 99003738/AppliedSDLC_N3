/*#include<stdio.h>
#include <calculator_operations.h>
int main()
{
    float operand1, operand2,a,b,c,d,e;
     
    char operators;
    printf("ENTER THE OPERATOR (+ , - , * , / ) :  ");
    scanf("%c",&operators);

    printf("ENTER THE TWO OPERANDS :  ");
    
    scanf("%f %f",&operand1,&operand2);

    switch(operators){
        
        case '+':
        a = operand1+operand2;
        printf(" %f + %f= %.2f",operand1,operand2,a);
        
        break;
        
        case '-':
        b = operand1-operand2;
        printf(" %f - %f= %.2f",operand1,operand2,b);
        
        break;
        
        case '*':
        c = operand1*operand2; 
        printf(" %f * %f= %.2f",operand1,operand2,c);
       
        break;
        
        case '/':
        d = operand1/operand2;
        printf(" %f / %f= %.2f",operand1,operand2,d);
       
        break;
        
        default:
        printf("operator is not correct");
         }
    
       
        return 0;
    
}*/


#include"arithmetic_operators.h"

int addition (int operand1,int operand2);
int subtraction (int operand1,int operand2);
int multiplication (int operand1, int operand2);
int division (int operand1, int operand2);

         /*ADDITION*/
int addition (int operand1,int operand2)
{
    int sum;
    sum = operand1+operand2;
    return sum;
}

int subtraction (int operand1,int operand2);
{
    int sub;
    sub = operand1-operand2;
    return sub;
}
int multiplication (int operand1, int operand2);
{
    int mul;
    mul = operand1*operand2;
    return mul;
}
int division (int operand1, int operand2);
    
{
    int div;
    div = operand1+operand2;
    return div;
}








  
