/*****************************************************
File name : 1.1_EscapeSequences.c
Date : 8 SEP 2021
Brief : Experimenting with different escape sequences.

*****************************************************/

#include <stdio.h>

int main (void)
{
  printf("------------------------------------------\n");
  printf("ESCAPE SEQUENCES    | EXAMPLES\n");
  printf("------------------------------------------\n");
  printf("Next line (\\n)      | Hello \n                    | World\n");
  printf("Tab (\\t)            | Hello \tWorld\n");
  printf("Backspace (\\b)      | Hello \bWorld\n");
  printf("Double quotes (\\\")  | Hello \"World\n");
  printf("Backslash (\\\\)      | Hello \\World\n");
  printf("Unknown (\\c)        | Hello \"\\c\" World\n");
  printf("------------------------------------------\n");
  return 0;
}