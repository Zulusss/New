#include <stdio.h>

int main(void) { 
  
  int a, b;
  int k;
  //char ch = 'a';
  switch(scanf("%d%d", &a, &b));
     switch (2){
      case 0: printf("da nu\n"); break;
      case 1: printf("%d\n", a>0&&b>0); break;
      case 2: printf("%d\n", a<0&&b>0); break;
      case 3: printf("%d\n", a>0&&b<0); break;
      case 4: printf("%d\n", a>0&&b<0); break;
      default: printf("kotepas");
     }
return 0;
   }