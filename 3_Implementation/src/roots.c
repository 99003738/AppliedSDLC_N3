#include<stdio.h>
#include <math.h>

int main()
{
double num, root;

    /* Input a number from user */
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);

    /* Calculate square root of num */
    root = sqrt(num);
       printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}