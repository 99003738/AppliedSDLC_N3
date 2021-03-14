#include "Complex.h"
#include "unity.h"

#define PROJECT_NAME  "Calculator"

void add_complex1(void);
void add_complex2(void);
void sub_complex1(void);
void sub_complex2(void);
void mul_complex1(void);
void mul_complex2(void);
void div_complex1(void);
void div_complex2(void);

void test_complex()
{

RUN_TEST(add_complex1);
RUN_TEST(add_complex2);
RUN_TEST(sub_complex1);
RUN_TEST(sub_complex2);
RUN_TEST(mul_complex1);
RUN_TEST(mul_complex2);
RUN_TEST(div_complex1);
RUN_TEST(div_complex2);

}
void add_complex1(void)
{
complex num1,num2,res;
num1.real = 2;
num1.imag = 3;
num2.real =4;
num2.imag =6;
res = add(num1,num2);
TEST_ASSERT_EQUAL(6.0, res.real);
TEST_ASSERT_EQUAL(9.0, res.imag);
}
void add_complex2(void)
{
complex num1,num2,res;
num1.real = 3;
num1.imag = 4;
num2.real =7;
num2.imag =11;
res = add(num1,num2);
TEST_ASSERT_EQUAL(10.0, res.real);
TEST_ASSERT_EQUAL(15.0, res.imag);
}
void sub_complex1(void)
{
complex num1,num2,res;
num1.real = 9;
num1.imag = 2;
num2.real =4;
num2.imag =6;
res = sub(num1,num2);
TEST_ASSERT_EQUAL(5.0, res.real);
TEST_ASSERT_EQUAL(-4.0, res.imag);
}
void sub_complex2(void)
{
complex num1,num2,res;
num1.real = 7;
num1.imag = 12;
num2.real =3;
num2.imag =2;
res = sub(num1,num2);
TEST_ASSERT_EQUAL(4.0, res.real);
TEST_ASSERT_EQUAL(10.0, res.imag);
}
void mul_complex1(void)
{
complex num1,num2,res;
num1.real = 2;
num1.imag = 3;
num2.real =4;
num2.imag =6;
res = mul(num1,num2);
TEST_ASSERT_EQUAL(8.0, res.real);
TEST_ASSERT_EQUAL(18.0, res.imag);
}
void mul_complex2(void)
{
complex num1,num2,res;
num1.real = 12;
num1.imag = 11;
num2.real =2;
num2.imag =3;
res = mul(num1,num2);
TEST_ASSERT_EQUAL(24.0, res.real);
TEST_ASSERT_EQUAL(33.0, res.imag);
}
void div_complex1(void)
{
complex num1,num2,res;
num1.real = 8;
num1.imag = 10;
num2.real =4;
num2.imag =2;
res = div(num1,num2);
TEST_ASSERT_EQUAL(2.0, res.real);
TEST_ASSERT_EQUAL(5.0, res.imag);
}
void div_complex2(void)
{
complex num1,num2,res;
num1.real = 15;
num1.imag = 18;
num2.real =3;
num2.imag =6;
res = div(num1,num2);
TEST_ASSERT_EQUAL(5.0, res.real);
TEST_ASSERT_EQUAL(3.0, res.imag);
}
