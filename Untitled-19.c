#include <stdio.h>
int main(void){
  int a=7, b=2;
  int res;

  res = a+b;
  printf("%d + %d = %d\n",a,b,res);
  res = a-b;
  printf("%d - %d = %d\n",a,b,res);
  res = a*b;
  printf("%d * %d = %d\n",a,b,res);
  res = a%b;
  printf("%d %% %d = %d\n",a,b,res);
  
  return 0;
}