#include <stdio.h>
int main(void){
  int dollars;
  double kurs, rub;
  scanf("%d", &dollars);
  scanf("%lf", &kurs);
  rub = dollars * kurs;
  printf("%.13f\n", rub);
  return 0;
}