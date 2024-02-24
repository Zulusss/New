#include <stdio.h>

int main() {
  int a;
  double b, p, c;
  scanf("%d", &a);
  c=a*2;
  p=3.1415926;
  b=a/(180/p);
  printf("%.2f\n", b);
  printf("%.2d\n", a);
  printf("%.2f", c);
  return 0;
}