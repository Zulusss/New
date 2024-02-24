#include <stdio.h>

int main() {
  int a;
  double b, p=3.1415926;
  scanf("%d", &a);
  b=a/(180/p);
  printf("%.2f", b);
  return 0;
}