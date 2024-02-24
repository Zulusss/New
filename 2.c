#include <stdio.h> 
int main(void) {
  int a, b, c, res;

  scanf("%d", &a); // считываем целое значение в переменную a
  scanf("%d", &b); // считываем целое значение в переменную b
  scanf("%d", &c); // считываем целое значение в переменную c
  res = a + b - c;  
  printf("%d + %d - %d = %d\n", a, b, c, res);
  return 0;
}  