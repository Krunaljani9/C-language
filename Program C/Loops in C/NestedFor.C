#include <stdio.h>
int main()
{
    int i,temp=0;
    for(i=1; i<=5; i++)
    {
        for(int j=7; j>=i; j--)
        {
           // temp++;
            //printf("%d",temp);
            printf("%d ",j);
        }
        printf("\n");

    }
}

