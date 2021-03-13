#include<stdio.h>
main() {
   int x = 50;
   int *ptr = &x;
   printf("The address is: %p, the value is %d", ptr, *ptr);
}