#include <stdio.h>
int main()
{
  /*  int x = 10, y = 5;
    switch(x>y && x+y>0)
    {
        case 1:
        printf("hi");
        break;
        case 0:
        printf("bye");
        break;
        default:
        printf(" Hello bye ");
    }*/

int number;
printf("1.Open Saving A/C \n");
printf("2.Open Current A/C\n");

printf("enter a number:");
scanf("%d",&number);
switch(number){
case 1:
printf("Saving A/C Created");
break;
case 2:
printf("Current A/C Created");
break;
default:
printf("number is not equal to 10, 50 or 100");
}
return 0;


}
