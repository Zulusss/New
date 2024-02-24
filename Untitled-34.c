#include <stdio.h>
#include <math.h>
int main() {
  double x1, y1, x2, y2;
  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  printf("%.2f\n", sqrt(fabs(x2-x1)+sqrt(fabs(y2-y1))));
  printf("%.2f\n", (fabs(x2-x1)+fabs(y2-y1)));
  printf("%.2f\n", (fabs(x2-x1)));
  printf("%.2f\n", (fabs(y2-y1)));
  printf("%.2f\n", x2-x1);
  printf("%.2f\n", y2-y1);
  return 0;
}