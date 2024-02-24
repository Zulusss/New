#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  c = fabs(a)+fabs(b);
  printf("%1.0d", c);
  return 0;
}