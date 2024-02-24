#include <stdio.h>

int main() {
  int a, b;
  double c, d;
  scanf("%d%d%lf", &a,&b,&c);
  d=(b-a)*c;
  printf("%.2f", d);
  return 0;
}