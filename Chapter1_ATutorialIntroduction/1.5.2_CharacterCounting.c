/**********************************************
 File name : 1.5.2_CharacterCounting.c
 Date : 10 SEP 2021
 Brief : Counts the number of input characters.

**********************************************/

#include <stdio.h>

int main(void)
{
  long nc;
  
  while(getchar()!='\n')
  {
    nc++;
  }
  printf("Number of characters = %ld\n", nc);
  return 0;
}