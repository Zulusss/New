#include <stdio.h>

int main() {
  int x,y;
  scanf("%f %f",&x,&y);
  printf("%.d",((x>0)&&(y>0))*1+((x<0)&&(y>0))*2+((x<0)&&(y<0))*3+((x>0)&&(y<0))*4); 
  return 0;
}