#include<stdio.h>

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

  
