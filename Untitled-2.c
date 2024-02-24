#include <stdio.h>
#include <math.h>
int main(void){
  int k, l, m;
  scanf("%d", &k);
  printf("k = %d\n", k);
  l = k/100;
  printf("l = %d\n", l);
  m = k/10 %10 *10;
  printf("m = %d\n", m);
  k = k %10 * 100;
  printf("%d", l + m + k);
  return 0;
}