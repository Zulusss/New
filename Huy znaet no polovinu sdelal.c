#include <stdio.h>
#include <math.h>

int main(void){
  int m, n, j;
  double l, k, c, w, f, v, e;  
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
  printf("%f %.1f %.g %f %f %f %f %.f", l, k, k, c, w, f, v, e);
  return 0;
}