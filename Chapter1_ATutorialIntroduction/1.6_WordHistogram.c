/**********************************************************
 File name : 1.6_WordHistogram.c
 Date : 12 SEP 2021
 Brief : Counts the lenght of words and prints a histogram.

**********************************************************/

#include <stdio.h>

#define IN  (1)
#define OUT (0)

int main(void)
{
  int c=0, i=0, j=0;
  long nw=0;
  long nc[20];
  char state = OUT;

  for(i=0;i<20;i++)
  {
    nc[i]=0;
  }
  
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
        nw++;  
        state = IN;
      }
      nc[nw-1]++;
    }
  }
  
  printf("\n");
  printf("Length of words:\n");
  for(i=0;i<nw;i++)
  {
    printf("Word-%d | ",(i+1));
    printf("%ld | ",nc[i]);
    for(j=0;j<nc[i];j++)
    {
      printf("-");
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}