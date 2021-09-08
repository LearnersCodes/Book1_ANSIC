/**************************************************
File name : 1.2_CelsiusFahrenheit.c
Date : 8/9/2021
Brief : Converts Fahrenheit to Celsius,
        for fahrenheit values from 0, 20, ..., 300.
        Converts Celsius to Fahrenheit,
        for celsuis calues from 0, 20, ..., 300.

**************************************************/

#include <stdio.h>

int main (void)
{
  float cel, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower;

  printf("Fahrenheit to Celsius Conversion:\n");
  printf("Fahrenheit     Celsius\n");

  while(fahr <= upper)
  {
    /* 5.0/9.0 is not truncated. */
    cel = (5.0/9.0) * (fahr - 32.0);
    printf("%10.0f\t%6.1f\n", fahr, cel);
    fahr = fahr + step;
  }

  printf("\nCelsius to Fahrenheit Conversion:\n");
  printf("Celsius     Fahrenheit\n");

  cel = lower;
  while(cel <= upper)
  {
    /* 5.0/9.0 is not truncated. */
    fahr = (cel * 9.0/5.0) + 32.0;
    printf("%7.0f\t%14.1f\n", cel, fahr);
    cel = cel + step;
  }
}