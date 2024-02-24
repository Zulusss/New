#include <stdio.h>
#include <stdlib.h>
#include <time.h> // чтобы использовать функцию time()
 
int main(void) {
  srand(time(NULL));
  int a, b;
  scanf("%d %d", &a, &b);
/* генерируем пять случайных целых чисел из отрезка [80;100] */
  printf("%d\n", a + rand()%(b-a+1));
}