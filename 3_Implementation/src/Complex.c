#include "Complex.h"



void input(void)
{
    printf("Enter the complex number with format re1 im1 re2 im2");
    scanf(" f% f% f% f% ", &re1, &im1, &re2, &im2);
    printf(" Choose your option :");
    option();
}

int option(int a)
{
 
     printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit");
    printf("\n\tEnter your choice\n");
    scanf("%d", &Com_Option);
    if ( 1 == Com_Option)
    {
        Com_add(re1,im1,re2,im2);
    }

return 0;
}

float Com_add(float re1, float im1, float re2, float im2)
{
          float res1=0, res2 = 0;
          res1 = (re1+re2);
          res2 = (im1+im2);
          printf(" The addition of given complex number is : %f i%f", res1,re2);
          return 0;





}