#include<stdio.h>
extern int a;
int a = 10;

int main()
{
    a=20;
printf("%d",a);
}
//int a = 20;  // compiler will show an error at this line
