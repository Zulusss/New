#include <stdio.h>
#include <math.h>

int main(void){
  int m, n, j;
  double l, k, c, w, f, v, e, i, h;  
  scanf("%d %d",&m, &n);
  l = m/(double)n; 
  k = l/10;
  c = (int)l;
  w = l-c;
  f = c*0.1;
  j = (int)f;
  v = j/j;
  e = (l - c)*10;
  i = (l - w)/10;
  h = (i - (int)i)*10;
  int q1 = l;
  double q2 = (l - q1)*1000;
  int q3 = q2;
  int q = q1%q3;
  printf("%f %.1f %.g %f %f %f %f %.f %f %.1f %g %f", l, k, k, c, w, f, v, e, i, i, h, q);
  return 0;
}


