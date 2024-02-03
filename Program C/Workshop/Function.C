#include<stdio.h>

int multiply(int a, int b);     // function declaration
int addNumbers(int x, int y);

int main()
{
    int i, j, result,add;
    printf("Please enter 2 numbers you want to multiply...");
    scanf("%d%d", &i, &j);

    result = multiply(i, j);        // function call
    printf("The result of muliplication is: %d", result);

    add=addNumbers(i,j);
    printf("The result of Addition is: %d", add);
    return 0;
}

int multiply(int a, int b)
{
    return (a*b);       // function defintion, this can be done in one line
}
int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
