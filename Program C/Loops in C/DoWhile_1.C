#include<stdio.h>
#include<stdlib.h>
int main ()
{
    //char c;
    int choice,dummy;
    do{
    printf("\n1. Print Hello\n2. Print C Prog\n3. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        printf("Hello \n");
        break;
        case 2:
        printf("C Prog \n");
        break;
        case 3:
        exit(0);
        break;
        default:
        printf("please enter valid choice");
    }
    printf("do you want to enter more?");
    scanf("%d",&dummy);
    //scanf("%c",&c);
    }while(dummy==5);
    return 0;
}
