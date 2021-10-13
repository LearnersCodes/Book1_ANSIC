/************************************************************
 File name : 1.10.a_ExternLongestLine.c
 Date : 13 OCT 2021
 Brief : Reads the input lines, finds the longest
         line and prints it. The functions are not re-usable.
         The variables are made global and declared as extern
         in different functions(which can be in different 
         files as well).

************************************************************/

#include <stdio.h>

#define MAXLEN 1000

char newline[MAXLEN];
char longestline[MAXLEN];
char reversedline[MAXLEN];
int max = 0;

int getnewline(void);
void copyline(void);
void reverseline(void);

int main(void)
{
  extern char newline[];
  extern char longestline[];
  extern char reversedline[];
  extern int max;

  int len = 0;

  /* Double enter will lead to exit of this while loop., because input line length will be 0. */
  while(((len = getnewline())>0))
  { 
    if(len > max)
    {
      copyline();
      max = len;
    }
  }

  if (max >0)
  {
    printf("\nThe longest line: %s", longestline);
    printf("Length of the longest line: %d\n", max);
    reverseline();
    printf("Longest line in reverse: %s\n\n", reversedline);
  }

  return 0;
}

int getnewline(void)
{
  extern char newline[];
  char c;
  int len=0;
  int BlnkCnt=0;
 
  /* 2 is subtracted because 2 places are required for '\n' and '\0' characters. */
  while (((c = getchar())!='\n')&&(c!=EOF)&&(len<(MAXLEN-2)))
  {
    newline[len++]=c;

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
  newline[len]='\n';  
  newline[len+1]='\0';

  return len;      
}

void copyline(void)
{
  extern char newline[];
  extern char longestline[];
  int i;
  for (i=0;(longestline[i]=newline[i])!='\0';i++);
}

void reverseline(void)
{
  extern char longestline[];
  extern char reversedline[];
  extern int max;
  int i;

  for (i=0; i<max; i++)
  {
    reversedline[max-1-i] = longestline[i];
  }
}