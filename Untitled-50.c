#include <stdio.h>
#include <stdlib.h>
#include <time.h> // чтобы использовать функцию time()
 
int main(void) {
  srand(time(NULL));
  int n;
  scanf("%d", &n);
/* генерируем пять случайных целых чисел из отрезка [80;100] */
  printf("%d\n", rand()%(n+1));
}