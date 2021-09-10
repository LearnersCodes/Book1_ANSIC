/**********************************
File name : 1.5.1_FileCopying.c
Date : 10 SEP 2021
Brief : Copies input to output.

**********************************/

#include <stdio.h>

int main(void)
{
  int c;
  c = getchar();
  while(c!=EOF)
  {
    putchar(c);
    c = getchar(); 
  }
  return 0;
}