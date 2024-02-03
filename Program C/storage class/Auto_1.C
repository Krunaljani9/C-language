#include <stdio.h>
int main()
{
int a; //auto
char b;
register float c;
printf("%d %c %f\n",a,b,c); // printing initial default value of automatic variables a, b, and c.
printf("Address %x %x %x",&a,&b,&c);
return 0;
}
