#include<stdio.h>

int main ()
{
    char s[10] = "agile";
    int i = 0;
    int count = 0;
    while(i<11)
    {
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count ++;
            printf("vowel is %c\n",s[i]);
        }
      //  printf("vowel is %c\n",s[i]);
        i++;
    }
    printf("The number of vowels %d",count);
    return 0;
}
