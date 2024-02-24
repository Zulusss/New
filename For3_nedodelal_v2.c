#include <stdio.h>

int main(void) {

  int k, m, i, l=0, v;
  scanf("%d %d", &k, &m);
  
  for (i = k ; i <= m ; i++)
   if (i>l) printf("%d ", i);

if (k < 0)
  k = 0;
  v = (m - k)-1;
  printf("\n%d", v);
  return 0;
}