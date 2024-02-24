#include <stdio.h>
#include <math.h>
int main(void){
  int r, h;
  double c, k, p=3.14159265358979323846;
  scanf("%d %d", &r, &h);
  c = p*pow(r, 2)*h;
  k = 0.33*p*pow(r, 2)*h;
  printf("%.2f %.2f %d %d", c, k, r, h);
  return 0;
}