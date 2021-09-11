/********************************************************
 File name : 1.5.3_MultipleBlanks.c
 Date : 11 SEP 2021
 Brief : Replaces multiple blanks with s single blank.

********************************************************/

#include <stdio.h>

#define FALSE (0)
#define TRUE  (1)

int main(void)
{
  int c = 0;
  char BlankFlag = FALSE;
  
  /* Provide Ctrl+D to give EOF. */
  while ((c = getchar()) != EOF)
  {
    if(c  == ' ')
    {
      if (BlankFlag == FALSE)
      {
        putchar(c);  
      }
      BlankFlag = TRUE;
    }
    else
    {
      putchar(c);
      BlankFlag = FALSE;
    }
  }
  return 0;
}