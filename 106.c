#include <stdio.h>
#include <math.h>
int main(void){
  int A, a1, a2, a3, a4;
  double x, m;
  scanf("%d", &A);
  a1=A/1000;
  a2=(A-(a1*1000))/100;
  a3=(A-a1*1000-a2*100)/10;
  a4=(A-a1*1000-a2*100-a3*10);
  m = a4*a2;
  x=(a3*a1)/m;
  printf("%d %d %d %d %f\n", a1, a2, a3, a4, m);
  printf("%.2f", x);
  return 0;
}