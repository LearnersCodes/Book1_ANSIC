/***************************************************************************
File name : 1.4_CelsiusFahrenheitMacros.c
Date : 9 SEP 2021
Brief : Converts Fahrenheit to Celsius usng for loop and symbolic constants,
        for fahrenheit values from 0, 20, ..., 300.

****************************************************************************/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main (void)
{
  int fahr;

  printf("Fahrenheit to Celsius Conversion using For Loop and Symbolic Constants:\n");
  printf("Fahrenheit     Celsius\n");

  for(fahr=LOWER; fahr<=UPPER; fahr+=STEP)
  {
    printf("%10d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0)); 
  }

  return 0;
}