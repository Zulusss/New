#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
/* генерируем пять случайных целых чисел меньших 100 */
  printf("%d\n", rand()%100);
  printf("%d\n", rand()%100);
  printf("%d\n", rand()%100);
  printf("%d\n", rand()%100);
  printf("%d\n", rand()%100);
}