#include <stdio.h>
#include <math.h>
int main(void){
  long int n, m;
  double k;
  scanf("%lf", &k);
  n = pow(10, 3) * 1000 * 1000;
  m = pow(2, 10) * 1024 * 1024;
  //K(m - n);
  printf("%.f\n", k*(m-n));
  //printf("%d %f %d", s, j, l*10);
  return 0;
}