#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
/* генерируем пять случайных целых чисел больших 80 и меньших 100 */
  printf("%d\n", 80 + rand()%100);
  printf("%d\n", 80 + rand()%100);
  printf("%d\n", 80 + rand()%100);
  printf("%d\n", 80 + rand()%100);
  printf("%d\n", 80 + rand()%100);
}