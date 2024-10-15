#include<stdio.h>
void main()
{
float c,f;
  printf("Enter temperature in celsius ");
  scanf("%f",&c);
  f=(c*(9.0/5.0))+32;
  printf("Temperature in Fahrenheit is %f",f);
  c=(f-32)*(5.0/9.0);
  printf("\n Temperature in celsius is %f",c);
  }