#include <stdio.h>

int main(void){
  int s, m, h;
  scanf("%d", &s);
  h=s/3600;
  m=(s-h*3600)/60;
  printf("%d %d", h, m);
  return 0;
}