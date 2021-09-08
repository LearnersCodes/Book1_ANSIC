/**************************************************
File name : 1.2_CelsiusFahrenheit.c
Date : 8/9/2021
Brief : Converts Fahrenheit to Celsius,
        for fahrenheit values from 0, 20, ..., 300.

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

  while(fahr <= upper)
  {
    /* 5.0/9.0 is not truncated. */
    cel = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, cel);
    fahr = fahr + step;
  }
}