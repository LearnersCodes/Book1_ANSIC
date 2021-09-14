/********************************************************
 File name : 1.5.3.c_PrintEscapeSequences.c
 Date : 11 SEP 2021
 Brief : Replaces tabs, backspace and backslash with
         their respective escape sequence.

********************************************************/

#include <stdio.h>

int main(void)
{
  int c = 0;

  /* Provide Ctrl+D to give EOF in terminal.
     Provide Ctrl+H to provide backspace character in terminal. */
  while ((c = getchar()) != EOF)
  {
    if(c == '\t')
    {
      printf("\\t");
    }
    else if(c == '\b')
    {
      printf("\\b");
    }
    else if(c == '\\')
    {
      printf("\\\\");
    }
    else
    {
      putchar(c);
    }
  }
  
  return 0;
}
