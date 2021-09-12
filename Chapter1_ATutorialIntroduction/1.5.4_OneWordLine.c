/********************************************************
 File name : 1.5.4_OneWordLine.c
 Date : 12 SEP 2021
 Brief : Prints one word per line.

********************************************************/

#include <stdio.h>

#define IN  (1)
#define OUT (0)

int main(void)
{
  int c = 0;
  char state = OUT;
  
  /* Provide Ctrl+D to give EOF. */
  while ((c = getchar()) != EOF)
  {    
    if((c == ' ')||(c == '\n')||(c == '\t'))
    {
      state = OUT;
    }
    else
    {
      if(state == OUT)
      {
        putchar('\n');  
        state = IN;
      }
      putchar(c);
    }
  }
  putchar('\n');
  return 0;
}