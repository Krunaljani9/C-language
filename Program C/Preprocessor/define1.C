#include <stdio.h>
#define a 20
int square=a*a;
#undef a

main() {
   printf("%d",square);

}
