#include <stdio.h>

int main(void) { 
  
  int a = 10, b = 5, c = 2;
  char ch = 'a';
  
  printf("%d\n", b > c );
  printf("%d\n", a == b*c );
  printf("%d\n", a != b*c );
  printf("%d\n", a < c );
  printf("%d\n", b >= c + 3 );
  printf("%d\n", -1 <= 2 );
  printf("%d\n", ch == 'a');
  printf("%d\n", ch != 'a');
    
  return 0;
}