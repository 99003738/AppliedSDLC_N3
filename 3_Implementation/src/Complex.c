
#include "Complex.h"


complex add(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}// complex addition
complex sub(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}// complex substraction
complex mul(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real * n2.real;
    temp.imag = n1.imag * n2.imag;
    return (temp);
}//complex multiplication
complex div(complex n1, complex n2) 
{
    complex temp;
    temp.real = n1.real / n2.real;
    temp.imag = n1.imag / n2.imag;
    return (temp);
}