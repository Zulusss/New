#include <stdio.h> 
int main(void){

  int month, day;
//  double bov_m, bov_f;
//  char gender;
  scanf("%d %d", &month, &day);
//  bov_m = 10*weight + 6.25*height - 5*age + 5;
//  bov_f = 10*weight + 6.25*height - 5*age - 161;
    switch (month) {
      case 1:   printf("%d\n", day); break;
      case 2:   printf("%d\n", day+31); break;
      case 3:   printf("%d\n", day+31+28); break;
      case 4:   printf("%d\n", day+31+28+31); break;
      case 5:   printf("%d\n", day+31+28+31+30); break;
      case 6:   printf("%d\n", day+31+28+31+30+31); break;
      case 7:   printf("%d\n", day+31+28+31+30+31+30); break;
      case 8:   printf("%d\n", day+31+28+31+30+31+30+31); break;
      case 9:   printf("%d\n", day+31+28+31+30+31+30+31+31); break;
      case 10:   printf("%d\n", day+31+28+31+30+31+30+31+31+30); break;
      case 11:   printf("%d\n", day+31+28+31+30+31+30+31+31+30+31); break;
      case 12:   printf("%d\n", day+31+28+31+30+31+30+31+31+30+31+30); break;

  
//          default : printf("ERROR");
    }

  return 0;
}