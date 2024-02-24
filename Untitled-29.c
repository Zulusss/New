#include <stdio.h>
#include <math.h>

int main() {
  int a;
  double b, res;
  res=pow(2, 5);
  scanf("%d", &a);
  b=((a%2)-1)*(-1);
  printf("%1.0f\n", b);
  printf("%1.0f", res);
  return 0;
}