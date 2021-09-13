/*****************************************************************
 File name : 1.6_CharFreq.c
 Date : 13 SEP 2021
 Brief : Histogram of the frequency of characters(only alphabets).
         Frequency = No. of characters of a type
                     ---------------------------  * 100
                     Total number of characters

*****************************************************************/

#include <stdio.h>

int main(void)
{
  int c=0,i=0,j=0;
  long nc=0,max=0;
  long nalph[26];

  for(i=0;i<26;i++)
  {
    nalph[i]=0;
  }
  
  /* Provide Ctrl+D to give EOF. */
  while ((c = getchar()) != EOF)
  { 
    nc++;
    if((c>='A')&&(c<='Z'))
    {
      nalph[c-'A']++;
    }
    else if((c>='a')&&(c<='z'))
    {
      nalph[c-'a']++;
    }
  }

  /* Frequency of each alphabet. */
  for(i=0;i<26;i++)
  {
    nalph[i]=(nalph[i]*100)/nc;
  }
  
  printf("\n");
  printf("Keys:\nF=Frequency\n\n");
  printf("Horizontal Histogram of Frequency of letters:\n");
  
  /* For each letter represents its frequency with a "-". */
  for(i=0;i<26;i++)
  {
    /* Print the alphabet and its frequency. */
    printf("%3c | ",(i+'a'));
    printf("F%3ld | ",nalph[i]);
    
    for(j=0;j<nalph[i];j++)
    {
      printf("-");
    }
    printf("\n");
  }
  printf("\n\n");

  printf("Vertical Histogram of Frequency of letters:\n");

  /* Find the maximum frequency among all the alphabets. */
  for(i=0;i<26;i++)
  {
    if(max < nalph[i])
    {
      max = nalph[i];
    }
  }

  for(i=max;i>=-1;i--)
  {
    for (j=0;j<26;j++)
    {
      if(i==0)
      {
        /* Print the Letter. */
        printf("%5c",(j+'a'));
      }
      else if (i==-1)
      {
        /* Print the frequency of each letter. */
        printf("%3c%2ld",'F',nalph[j]);
      }
      /* If the frequency of a letter is lesser than the current i, then print a blank,
         else, print "|" for the histogram. */
      else if(nalph[j]<i)
      {
        printf("%5c",' ');
      }
      else
      {
        printf("%5c",'|');
      }
    }
    printf("\n");
  }

  printf("\n\n");

  return 0;
}