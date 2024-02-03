#include <stdio.h>
#define INPUT
 main() {
int a;
#ifdef NOINPUT
a=2;
#else
printf("Enter a:");
scanf("%d", &a);
#endif
printf("Value of a: %d\n", a);
}
