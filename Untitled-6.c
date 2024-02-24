#include <stdio.h>
#include <math.h>
int main(void){
  double n=2.5, x, y, z;
  x = n + 0.16667;
  y = x + 0.041656;
  z = y + 0.0083333;
  printf("%.5f\n%.5f\n%.5f", x, y, z);
  return 0;
}