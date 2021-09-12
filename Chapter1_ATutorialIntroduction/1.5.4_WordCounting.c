/*********************************************************
 File name : 1.5.4_WordCounting.c
 Date : 12 SEP 2021
 Brief : Counts the number of words, lines and characters.

*********************************************************/

#include <stdio.h>

#define IN  (1)
#define OUT (0)

int main(void)
{
  int c = 0;
  long nl=0, nw=0, nc=0;
  char state = OUT;
  
  /* Provide Ctrl+D to give EOF. */
  while ((c = getchar()) != EOF)
  {
    nc++;
    if(c == '\n')
    {
      nl++;
    }
    
    if((c == ' ')||(c == '\n')||(c == '\t'))
    {
      state = OUT;
    }
    else if(state == OUT)
    {
      nw++;
      state = IN;
    }
  }
  
  printf("Number of words      = %ld\n", nw);
  printf("Number of lines      = %ld\n", nl);
  printf("Number of characters = %ld\n", nc);
  return 0;
}