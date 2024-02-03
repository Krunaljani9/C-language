#include <stdio.h>
void getarray(int arr[])
{
    printf("Elements of array are : \n");
    for(int i=0;i<5;i++)
    {
        printf("%d \n", arr[i]);
    }
}
int main()
{
    int brr[5]={45,67,34,78,90};
    int brr1[5]={88,55,33,78,90};
   getarray(brr); //valid
   getarray(brr1);
   return 0;
}
