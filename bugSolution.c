#include <stdio.h>
#include <limits.h>
int main() { long long x = 10; long long *ptr = &x;  if(x < LLONG_MAX) {*ptr = x+1000000000000;}
printf("%lld", x); return 0;} 