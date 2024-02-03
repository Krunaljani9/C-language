#include <stdio.h>
int main(){
   FILE *fpl;
   fpl = fopen("file1.txt", "w");//opening file
   fprintf(fpl, "Krunal\n");
   printf("file written");
   fclose(fpl);//closing file
   return 0;
}
