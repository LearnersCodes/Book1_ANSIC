/**********************************
 File name : 1.5.1.a_FileCopying.c
 Date : 10 SEP 2021
 Brief : Copies input to output.

**********************************/

#include <stdio.h>

int main(void)
{
  int c;

  printf("Value of EOF = %d\n", EOF);
  
  /* Parenthesis is used around c=getchar because != has higher precendence than =.
     If parenthesis is not used then c will be either assigned with 0 or 1 because,
     the result of getchar() != EOF will be boolean. */
  while((c=getchar())!=EOF)
  {
    putchar(c);
  }
  return 0;
}
