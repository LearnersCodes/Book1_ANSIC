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
  long nc[20], max;
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
  printf("Keys:\nW=Word\nL=Length\n\n");
  printf("Horizontal Histogram of length of words:\n");
  
  /* For each word represent its length with a "-". */
  for(i=0;i<nw;i++)
  {
    /* Print the word number and the length of each word. */
    printf("W%3d | ",(i+1));
    printf("L%3ld | ",nc[i]);
    
    for(j=0;j<nc[i];j++)
    {
      printf("-");
    }
    printf("\n");
  }
  printf("\n\n");

  printf("Vertical Histogram of length of words:\n");

  /* Find the maximum character length among all the words. */
  for(i=0;i<nw;i++)
  {
    if(max < nc[i])
    {
      max = nc[i];
    }
  }

  for(i=max;i>=-1;i--)
  {
    for (j=0;j<nw;j++)
    {
      if(i==0)
      {
        /* Print the word number. */
        printf("%4c%2d",'W',(j+1));
      }
      else if (i==-1)
      {
        /* Print the length of each word. */
        printf("%4c%2ld",'L',nc[j]);
      }
      /* If the length of a word is lesser than the current i, then print a blank,
         else, print "|" for the histogram. */
      else if(nc[j]<i)
      {
        printf("%6c",' ');
      }
      else
      {
        printf("%6c",'|');
      }
    }
    printf("\n");
  }

  printf("\n\n");

  return 0;
}