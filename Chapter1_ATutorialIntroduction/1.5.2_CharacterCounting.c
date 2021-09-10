/**********************************************
 File name : 1.5.2_CharacterCounting.c
 Date : 10 SEP 2021
 Brief : Counts the number of input characters.

**********************************************/

#include <stdio.h>

int main(void)
{
  double nc;
  
  /* Provide Ctrl+D to give EOF. */
  for(nc=0; getchar()!=EOF; nc++);
  
  printf("Number of characters = %.0f\n", nc);
  return 0;
}