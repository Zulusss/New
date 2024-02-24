#include <stdio.h>
#include <math.h>
int main(void){
  int r, R, m;
  double j, k, s2, z;
  scanf("%d", &r);
  //r*r = 4*(R*R);
  //printf("%d\n", R);
  //c = 3,14*d
  s2 = 4*3.14*(r*r);
  printf("%f\n", s2);
  k = s2;
  printf("%f\n", k);
  j = sqrt (s2/3.14);
  printf("%f\n", j);
  printf("%d\n", r);
  z = j*2*0.009;
  printf("%f", z);
 
  //printf("%d %d %f\n", j, s2, k);
  //printf("%f\n", h);
  return 0;
}