#include <stdio.h>
#include <math.h>

int main() {
  int a;
  double b;
  scanf("%d", &a);
  b=((a%2)-1)*(-1);
  printf("%1.0f", b);
  return 0;
}