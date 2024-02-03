#include<stdio.h>
void sum()
{
 int a = 10;
static int b = 24;
printf("%d %d \n",a,b);
a++;
b++;
}
int main()
{
int i;

for(i = 0; i< 4; i++)
{

sum(); // The static variables holds their value between multiple function calls.
}
return 0;
}
