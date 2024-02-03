#include <stdio.h>
/*
 value 0 1 1 2 3
 index 0 1 2 3 4
*/
int fibonacci(int i) {

   if(i == 0) {
      return 0;
   }

   if(i == 1) {
      return 1;
   }
   return fibonacci(i-1) + fibonacci(i-2);

}
/*int sum(int j){

if(j==0)
{
    return 0;
}
return sum(j-1)+j;
}*/

int  main() {

   int i;

   for (i = 0; i < 10; i++) {

      printf("%d\t %d\n", fibonacci(i),i);
   }
   //printf("sum is %d ", sum(5));

   return 0;
}
