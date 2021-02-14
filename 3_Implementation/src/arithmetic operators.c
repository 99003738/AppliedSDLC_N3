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
