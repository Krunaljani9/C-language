#include<stdio.h>
int main(){

int number=5;
int *raj;
raj=&number;//stores the address of number variable
printf("Address of number variable is %x \n",&number);
printf("Address of raj variable is %x \n",raj); // p contains the address of the number therefore printing p gives the address of number.
printf("Value of raj variable is %d \n",*raj); // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.
return 0;
}
