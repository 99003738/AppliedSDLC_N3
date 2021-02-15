#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#include <stdio.h>
#include <stdlib.h>


float re1,im1,re2,im2;
int Com_Option;

void inp(void);
int  option(void);
float Com_add(float re1, float re2, float im1, float im2);
float Com_sub(float re1, float re2, float im1, float im2);
float Com_mul(float re1, float re2, float im1, float im2);


#endif 