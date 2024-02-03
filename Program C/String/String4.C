#include<stdio.h>
#include<string.h>
int main ()
{
    char s[20];
    int flag;

    printf("Enter the string ");
    scanf("%s",&s);
    //scanf("%[^\n]",s); //multiple word input
   flag=strcmp(s,"yes");
    if(flag==0){

      printf("Login Successfull");
    }
    printf("You entered %s",s);
    return 0;
}
