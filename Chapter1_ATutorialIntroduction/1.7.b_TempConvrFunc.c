/*****************************************************
 File name : 1.7.b_TempConvrFunc.c
 Date : 13 SEP 2021
 Brief : Converts Fahrenheit to Celsius usng functions,
         for fahrenheit values from 0, 20, ..., 300.
         And for value from 300, 280, ..., 0.

*****************************************************/

#include <stdio.h>

#define LOWER (0)
#define UPPER (300)
#define STEP  (20)

float celtofahr (int cel);
float fahrtocel (int fahr);

int main (void)
{
  int cel;
  int fahr;

  printf("Celsius to Fahrenheit Conversion:\n");
  printf("Celsius     Fahrenheit\n");

  for(cel=LOWER; cel<=UPPER; cel+=STEP)
  {
    printf("%7d\t%14.1f\n", cel, celtofahr(cel)); 
  }
  
  printf("\nFahrenheit to Celsius Conversion:\n");
  printf("Fahrenheit     Celsius\n");

  for(fahr=LOWER; fahr<=UPPER; fahr+=STEP)
  {
    printf("%10d\t%6.1f\n", fahr, fahrtocel(fahr)); 
  }

  return 0;
}

float celtofahr (int cel)
{
  return (cel * 9.0/5.0) + 32.0;  
}

float fahrtocel (int fahr)
{
  return (5.0/9.0) * (fahr - 32.0);
}
