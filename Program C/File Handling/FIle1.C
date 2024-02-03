#include<stdio.h>
int main( )
{
    //Hello  jjj
FILE *fp ;
char ch ;
fp = fopen("File1.c","r") ;
while ( 1 )
{
ch = fgetc ( fp ) ;
if ( ch == EOF )
break ;
printf("%c",ch) ;
}
fclose (fp ) ;
return 0;
}
