#include <stdio.h>
#include <math.h>
int main() {
  double a, b, c, p, s;
  scanf("%lf%lf%lf", &a, &b, &c);
  s = sqrt(p*(p-a)*(p-b)*(p-c));
  printf("%f", s);
  return 0;
}