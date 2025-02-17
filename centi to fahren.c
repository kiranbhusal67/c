#include<stdio.h>

void fun(float x);

int main()
{
    float c;
printf("Enter the temperature in centigrade;");
scanf("%f", &c);
fun(c);
return 0;
}

void fun(float x)
{
float f;
f = (x * 9/5) + 32;
printf("the required temperature in fahrenheit is %.2f:",f);
