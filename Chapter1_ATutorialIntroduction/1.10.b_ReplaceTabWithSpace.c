/********************************************************
 File name : 1.10.b_ReplaceTabWithSpace.c
 Date : 13 OCT 2021
 Brief : Replaces tabs with correct number of spaces.

********************************************************/

#include <stdio.h>

#define TABSP (8)

int main(void)
{
  int c = 0;
  int i = 0;
  int cnt = 0;

  /* Print tab stops. Assume - 8 spaces. */
  for (i=0;i<10;i++)
  {
    printf("|       ");
  }
  printf("|");
  printf("\n");

  /* Provide Ctrl+D to give EOF in terminal.
     Provide Ctrl+H to provide backspace character in terminal. */
  while ((c = getchar()) != EOF)
  {
    if(c == '\t')
    {
      for(i=0; i< (TABSP-(cnt%TABSP)); i++)
      {
        putchar(' ');
      }
      cnt += i;
    }
    else
    {
      putchar(c);
      cnt++;
    }
  }
  
  return 0;
}
