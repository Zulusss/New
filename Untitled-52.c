#include <stdio.h>
#include <math.h>
int main(void){
  int x, a, b, c;
  scanf("%d", &a);
  a = pow(a, 2);
  b = 6*a;
  c = pow(a, 3);

  printf("%d %d %d\n", a, b, c);
  return 0;
}