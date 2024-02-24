#include <stdio.h>
#include <math.h>

int main(void){
  int m, n, t, d, g;
  double s, f, j;
   scanf("%d %d",&m, &n);
  s = m/(double)n;
  d = m/n;
  f = (s-d)*10;
  g = (int)f;
  j = s/d;
  (d-d)+(d/10)
  t = m%n; 
   printf("%d %d %f %f %d %f", d, t, s, f, g, j);
  return 0;
}