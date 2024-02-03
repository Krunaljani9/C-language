#include<stdio.h>

int main(){
	int i;
	int marks[]={80,30,40,100,60};//declaration and initialization of array
    int max;
	//printf("%d\n",marks[0]);
//	printf("%d\n",marks[1]);
     max=marks[0];
	int length=sizeof(marks)/sizeof(marks[0]);
	 //traversal of array
	for(i=0;i<length;i++){
	if(max>marks[i]){
        max=marks[i];
    }

}
printf("%d",max);
return 0;
}
