#include <stdio.h>
/* This is a test file with lots of comments and strin literals */
int main () {
  int i; /* Integer variable */
  int x = 100 /** Adding some confusion here **// 2;
  /* A string literal in a “comment” */	
  char *s= "We can \"quote\" strings"; 
  char t[] = "We have only /* C comments, not // C++ ones";
  char c = '"',d='\'';
  i = 100 */* Another comment in the middle */ 3;
  printf("%d\t%d\t%s\t%s\t%c\t%c\n", x, i,s,t,c,d); /* Print values */
  return 0;
}
