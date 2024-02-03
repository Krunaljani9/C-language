#include<stdio.h>
int main(){
int i,j;
/*
for(initializer;conditional;incre/decre)
    */
for(i=1;i<=5;i++)//outer row
    {

      for(j=1;j<=i;j++) //inner column
      {
        printf("*");
      }
      printf("\n");
}
printf("rest");

return 0;
}
