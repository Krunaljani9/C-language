#include<stdio.h>
int disp(int);
int main()
{
    int a=10;
    // call by value
    int j=disp(a);
    printf("A is %d",j);
    return 0;
}
int disp(int x){

return x+1;
}


