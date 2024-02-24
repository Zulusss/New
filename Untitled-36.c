#include <stdio.h>
#include <math.h>
int main() {
  double a, b, deg, rad, s, p=3.141593;
  scanf("%lf %lf %lf", &a, &b, &deg);
  rad=deg/(180/p);
  s=((a*b*sin(rad))/2);
  printf("%.2f", s);
  return 0;
}