#include <stdio.h>

int main() {
  int a, b, c, d, e;
  
  scanf("%d", &a);

  b=a/100;
  c=(a-b*100)/10;
  d=a-(100*b)-(10*c);
  e=b+c+d;

  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  return 0;
}