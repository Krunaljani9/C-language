#include <stdio.h>
#include <string.h>
union Data1{
int j;
};
union Data {
   int i;
   float f;
   char str[20];
   union Data1 d;
};

int main( ) {

   union Data data;
    data.d.j=5;
    printf("nested Union Example %d\n",data.d.j);
   data.i = 10;
   printf( "data.i : %d\n", data.i);

   data.f = 220.5;
   printf( "data.f : %f\n", data.f);

   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   return 0;
}
