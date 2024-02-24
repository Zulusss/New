#include <stdio.h>
#include <math.h>
int main(void){
  int x, a, b, c, d;
  scanf("%d", &x);
  a = pow(x, 2);
  b = 6*a;
  c = pow(x, 3);
  printf("%d %d %d", a, b, c);
  return 0;
}