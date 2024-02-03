#include<stdio.h>
int main(){
int uname,pw;
printf("Enter username ");
scanf("%d",&uname);
printf("Enter Password ");
scanf("%d",&pw);
if(uname==40){ // outer Condition

    if(pw==20){ //inner Condition
       printf("Login Successful");
    }
    else{
        printf("password incorrect");
    }
}
else{
    printf("Username incorrect");
}
return 0;
}
