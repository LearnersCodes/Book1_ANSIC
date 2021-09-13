/**********************************************************
 File name : 1.7_PowerFunc.c
 Date : 13 SEP 2021
 Brief : Function to calculate power of a base.

**********************************************************/

#include <stdio.h>

int power (int base, int pow);

int main(void)
{
  int i;

  printf ("Power 2Powers 3Powers\n");
  for (i=0; i<10; i++)
  {
    printf("%5d %7d %7d\n", i, power(2,i), power(3,i));
  }
  return 0;
}

int power (int base, int pow)
{
  int p;

  for (p=1; pow>0; pow--)
  {
    p = p * base;
  }
  return p;
}