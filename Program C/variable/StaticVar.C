#include<stdio.h>
//int z=10; //Global variable
void ok(){
int x=10;//local variable
static int y=10;//static variable
x=x+1;
y=y+1;
//y++;
printf("x=%d,y=%d \n",x,y);

}
int main()
{

    ok();
    ok();
    ok();
return 0;

}
