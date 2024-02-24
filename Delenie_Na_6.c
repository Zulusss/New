#include <stdio.h>

int main(void) { 

  int x = 15; 

  if ( !( !( x%3 == 0) && !( x%2 == 0 ) ) ) 
    printf("kratno\n");
  else 
    printf("ne kratno\n");

  return 0;
}