#include <stdio.h>

/* global variable declaration */
int g=10;
void disp(){

printf("%d",g);
}
int main () {
  disp();
  /* local variable declaration */
  int a, b;

  /* actual initialization */
  a = 10;
  b = 20;
  g = a + b;

  printf("value of a = %d, b = %d and g = %d\n", a, b, g);
  disp();
  return 0;
}

