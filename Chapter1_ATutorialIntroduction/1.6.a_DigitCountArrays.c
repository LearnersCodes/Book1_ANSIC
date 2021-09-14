/*****************************************************************
 File name : 1.6.a_DigitCountArrays.c
 Date : 12 SEP 2021
 Brief : Counts the number each digit, space and other characters.

*****************************************************************/

#include <stdio.h>

int main(void)
{
  int c=0, i=0;
  long nspace=0, nchar=0;
  long ndigit [10];

  for(i=0;i<10;i++)
  {
    ndigit[i] = 0;
  }
  
  /* Provide Ctrl+D to give EOF. */
  while ((c = getchar()) != EOF)
  {
    if((c == ' ')||(c == '\n')||(c == '\t'))
    {
      nspace++;
    }
    else if((c >= '0')&&(c <= '9'))
    {
      ndigit[c - '0']++;
    }
    else
    {
      nchar++;
    }
  }
  
  printf("\n");
  printf("Number of spaces     = %ld\n", nspace);
  printf("Number of characters = %ld\n", nchar);
  printf("Number of digits     = ");
  for(i=0;i<10;i++)
  {
    printf("%ld ",ndigit[i]);
  }
  printf("\n");

  return 0;
}
