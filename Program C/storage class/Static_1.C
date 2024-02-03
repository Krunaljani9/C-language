#include<stdio.h>
static char c;
static int i;
static float f;
static char s[100];
int main ()
{
printf("%d %d %f %c",c,i,f,s); // the initial default value of c, i, and f will be printed.
return 0;
}
