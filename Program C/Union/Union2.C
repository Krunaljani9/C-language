#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;
   data.i = 10;
   printf("Data.i = %d",data.i);
   data.f = 220.5;
   printf("Data.f = %.2f ",data.f);
   strcpy( data.str, "C Programming");

//printf("Data.i = %d \n",data.i);
//printf("Data.f = %f \n",data.f);
printf( "data.str : %s\n", data.str);

  // printf( "data.f : %.2f\n", data.f);
   return 0;
}
