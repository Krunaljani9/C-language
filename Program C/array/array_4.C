#include<stdio.h>
int main(){
int i=0,j=0;
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

//traversing 2D array
for(i=0;i<4;i++){//row
 for(j=0;j<3;j++){//column
   printf("%d",arr[i][j]);
 }//end of j
 printf("\n");
}//end of i
return 0;
}
