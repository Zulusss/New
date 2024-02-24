#include <stdio.h>

int main(void) { 
  
  int a = 0, b = 0;
  int k=0;
  char ch = 'a';
  scanf("%d %d", &a, &b);

//        switch(2){
//      case 0: printf("error");break;
//      case 1:printf("1a");break;
//      case 2:printf("2a");break;
//      case 3:printf("3a");break;
//      case 4:printf("4a");break;
//      default:printf("auf");
//    }
printf("%d\n", a>0&&b>0, &k);
printf("%d", k);
  switch(k+1) {
    case 0: printf("NeOdin\n"); break;
    case 1: printf("1\n"); break;
          }
  printf("%d\n", a<0&&b>0);
  printf("%d\n", a>0&&b<0);
  printf("%d\n", a<0&&b<0);

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