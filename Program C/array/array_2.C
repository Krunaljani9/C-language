#include<stdio.h>
int main(){
int j;
int marks[5];//declaration of array
marks[0]=80;//initialization of array
marks[1]=60;
marks[3]=85;
marks[2]=70;
marks[4]=75;
//traversal of array
for(j=0;j<5;j++){
printf("Enter marks [%d] ",j);
scanf("%d",&marks[j]);
}//end of for loop
//traversal of array
for(j=0;j<5;j++){
printf("%d \n",marks[j]);
}//end of for loop
//printf("%d ",marks[3]);
return 0;
}
