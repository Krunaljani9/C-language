#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}
void add(int a){
a++;
}
int main()
{
  int* p, i = 10,a=10;
  p = &i;
  addOne(p);
  add(a);
   printf("a=%d\n",a);
  printf("%d\n", *p); // 11
   printf("%d", i); // 11
  return 0;
}
