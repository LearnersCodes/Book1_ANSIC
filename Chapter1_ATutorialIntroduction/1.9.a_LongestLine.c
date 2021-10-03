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
void reverseline(char from[], char to[], int length);

int main(void)
{
  char newline[MAXLEN];
  char longestline[MAXLEN];
  char reversedline[MAXLEN];
  int len = 0, max = 0;

  /* Double enter will lead to exit of this while loop., because input line length will be 0. */
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
    printf("\nThe longest line: %s", longestline);
    printf("Length of the longest line: %d\n", max);
    reverseline(longestline, reversedline, max);
    printf("Longest line in reverse: %s\n\n", reversedline);
  }

  return 0;
}

int getnewline(char line[], int length)
{
  char c;
  int len=0;
  int BlnkCnt=0;
 
  /* 2 is subtracted because 2 places are required for '\n' and '\0' characters. */
  while (((c = getchar())!='\n')&&(c!=EOF)&&(len<(length-2)))
  {
    line[len++]=c;

    /* For not using/removing the trailing blanks or tabs. */
    if((c!=' ')&&(c!='\t'))
    {
      BlnkCnt = 0;
    }
    else
    {
      BlnkCnt++;
    }
  }

  len -= BlnkCnt;
  line[len]='\n';  
  line[len+1]='\0';

  return len;      
}

void copyline(char from[], char to[])
{
  int i;
  for (i=0;(to[i]=from[i])!='\0';i++);
}

void reverseline(char from[], char to[], int length)
{
  int i;
  for (i=0; i<length; i++)
  {
    to[length-1-i] = from[i];
  }
}