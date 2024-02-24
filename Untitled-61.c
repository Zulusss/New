#include <stdio.h>

int main(void) { 
  
  int a = 10, b = 5, c = 2;
    
  printf("%d\n", a == b*c );
  printf("%d\n", !(a == b*c) );
  printf("%d\n", a != b*c );
  printf("%d\n", !(a != b*c) );
    
  return 0;
}
