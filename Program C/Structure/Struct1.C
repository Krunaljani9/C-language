#include<stdio.h>
struct Anil
{
    char name[20];
    int contactNo;
    float salary;
};
int main()
{
    struct Anil person1, person2, p[20];

    printf("size of structure %d\n",sizeof(Anil));
    printf("size of structure %d\n",sizeof(int));
    printf("size of structure %d\n",sizeof(float));
    printf("size of structure %d\n",sizeof(char[20]));
    return 0;
}
