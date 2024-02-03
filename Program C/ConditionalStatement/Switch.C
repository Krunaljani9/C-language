#include<stdio.h>
int main(){
int number;

printf("1. Cash withdraw \n");
printf("2. Cash Deposit\n");
printf("3.  Balance Check\n");

printf("enter a number:");
scanf("%d",&number);
switch(number){
case 1:
printf(" Cash withdraw selected");
break;
case 2:
printf("Cash Deposit selected");
break;
case 3:
printf(" Balance Check selected");
break;
default:
printf("number is not equal to 1, 2 or 3");
}
return 0;
}
