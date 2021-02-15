#include "Complex.h"



void input(void)
{
    printf("Enter the complex number with format re1 im1 re2 im2");
    Scanf(" f% f% f% f% ", &re1,&im1, &re2, &im2);
    printf(" Choose your option :");
    option();
}

int option(int a)
{
 
     printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit");
    printf("\n\tEnter your choice\n");


}

float Com_add(float re1, float re2, float im1, float im2)
{

}