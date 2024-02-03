#include<stdio.h>
void multiply(int a, int b);
int addNumbers(int a, int b);
int main()
{
    int i, j, result,add,add1;
    printf("Please enter 2 numbers you want to multiply...");
    scanf("%d%d", &i, &j);
   add=addNumbers(i,j);
    printf("The result of Addition is: %d", add);
           // function call
           multiply(i, j);
    //printf("The result of muliplication is: %d",  );


    return 0;
}

void multiply(int a, int b)
{
    printf(" Your multiplication is %d",(a*b));       // function defintion, this can be done in one line
}

int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}

