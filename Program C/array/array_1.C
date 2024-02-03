#include<stdio.h>

int main(){
	int i;
	int marks[]={80,30,40,50,60};//declaration and initialization of array

	printf("%d\n",marks[0]);
	printf("%d\n",marks[1]);

	int length=sizeof(marks)/sizeof(marks[0]);
	printf("array sizeof %d \n",sizeof(marks));
	printf("each value sizeof %d \n",sizeof(marks[0]));
	printf("Array Length is %d\n ",length);
	 //traversal of array
	for(i=0;i<length;i++){
	printf("marks[%d] %d \n",i,marks[i]);

}

return 0;
}
