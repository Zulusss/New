#include <stdio.h>

int main(void) { 

  int x = 0; 
  scanf("%d", &x);

  if ( x < 0 ){
    printf("x = %d\n", x);
    x = (-1)*x;
  }

  printf("%d\n", x);

  return 0;
}