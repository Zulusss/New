#include <stdio.h>
#include <math.h>

int main(void){
  int m = 1234, n = 47, j;
  double l, k, c, w, f, v, e, i, h;  
  scanf("%d %d",&m, &n);
  l = m/(double)n; 
  k = l/10;
  c = (int)l;
  w = l-c;
  f = c*0.1;
  j = (int)f;
  //v = j/j;
  e = (l - c)*10;
  i = (l - w)/10;
  h = (i - (int)i)*10;
  printf("%g %.f", h, e);
  return 0;
}