/**************************************************
File name : 1.2_CelsiusFahrenheit.c
Date : 8/9/2021
Brief : Converts Fahrenheit to Celsius,
        for fahrenheit values from 0, 20, ..., 300.

**************************************************/

#include <stdio.h>

int main (void)
{
  int cel, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower;

  while(fahr <= upper)
  {
    /* 5 is multiplied first and then 9 is divided because integer division of 5/9 directly
       will truncate the result to 0. All values will become 0. */
    cel = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr, cel);
    fahr = fahr + step;
  }
}