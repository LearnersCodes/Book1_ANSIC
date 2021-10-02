/*****************************************************
 File name : 1.9.a_LongestLine.c
 Date : 15 SEP 2021
 Brief : Reads the input lines, finds the longest
         line and prints it.

*****************************************************/

#include <stdio.h>

#define MAXLEN 1000

int getnewline(char line[], int length);
void copyline(char from[], char to[]);

int main(void)
{
  char newline[MAXLEN];
  char longestline[MAXLEN];
  int len = 0, max = 0;

  while(((len = getnewline(newline, MAXLEN))>0))
  { 
    if(len > max)
    {
      copyline(newline, longestline);
      max = len;
    }
  }

  if (max >0)
  {
    printf("\nThe longest line: ");
    printf("%s\n", longestline);
  }

  return 0;
}

int getnewline(char line[], int length)
{
  char c;
  int len=0;

  /* 2 is subtracted because 2 places are required for '\n' and '\0' characters. */
  while (((c = getchar())!='\n')&&(c!=EOF)&&(len<(length-2)))
  {
    line[len++]=c;
  }

  line[len+1]='\n';  
  line[len+2]='\0';

  return len;      
}

void copyline(char from[], char to[])
{
  int i;
  for (i=0;(to[i]=from[i])!='\0';i++);
}