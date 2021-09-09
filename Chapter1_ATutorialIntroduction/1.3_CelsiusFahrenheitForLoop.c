/*****************************************************
File name : 1.3_CelsiusFahrenheitForLoop.c
Date : 9/9/2021
Brief : Converts Fahrenheit to Celsius usng for loop,
        for fahrenheit values from 0, 20, ..., 300.
        And for value from 300, 280, ..., 0.

*****************************************************/

#include <stdio.h>

int main (void)
{
  int fahr;

  printf("Fahrenheit to Celsius Conversion using For Loop:\n");
  printf("Fahrenheit     Celsius\n");

  for(fahr=0; fahr<=300; fahr+=20)
  {
    printf("%10d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0)); 
  }
  
  printf("\nFahrenheit to Celsius Conversion using For Loop in reverse:\n");
  printf("Fahrenheit     Celsius\n");

  for(fahr=300; fahr>=0; fahr-=20)
  {
    printf("%10d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0)); 
  }

  return 0;
}