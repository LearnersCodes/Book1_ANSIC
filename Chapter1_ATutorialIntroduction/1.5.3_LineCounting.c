/********************************************************
 File name : 1.5.3_LineCounting.c
 Date : 11 SEP 2021
 Brief : Counts the number of new lines, blanks and tabs.

********************************************************/

#include <stdio.h>

int main(void)
{
  int c;
  long nl=0, nb=0, nt=0;
  
  /* Provide Ctrl+D to give EOF. */
  while ((c = getchar()) != EOF)
  {
    /* '\n' represent a single character whose ASCII value is 10.
       "\n" is a string consisting of a single character. */
    if(c == '\n')
    {
      nl++;
    }
    else if(c == ' ')
    {
      nb++;
    }
    else if(c == '\t')
    {
      nt++;
    }

  }
  
  printf("Number of lines  = %ld\n", nl);
  printf("Number of blanks = %ld\n", nb);
  printf("Number of tabs   = %ld\n", nt);
  return 0;
}