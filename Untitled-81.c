#include <stdio.h>

int main(void) { 
  
  int a = 0, b = 0;
  char ch = 'a';
  scanf("%d %d", &a, &b);
  printf("%d\n", a>0&&b>0);
  printf("%d\n", a<0&&b>0);
  printf("%d\n", a<0&&b<0);
  printf("%d\n", a>0&&b<0);
    switch(6){
      case 0: printf("error");break;
      case 1:printf("1");break;
      case 2:printf("2");break;
      case 3:printf("3");break;
      case 4:printf("4");break;
      default:printf("auf");
    }
  //printf("%d\n", b > c );
  //printf("%d\n", a == b*c );
  //printf("%d\n", a != b*c );
  //printf("%d\n", a < c );
  //printf("%d\n", b >= c + 3 );
  //printf("%d\n", -1 <= 2 );
  //printf("%d\n", ch == 'a');
  //printf("%d\n", ch != 'a');
    
  return 0;
}