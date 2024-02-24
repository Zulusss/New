#include <stdio.h> 
int main(void){

  int age, height, weight;
  double bov_m, bov_f;
  char gender;
  //  printf("Vash vozrast?(god)\n");
  scanf("%c %d %d %d", &gender, &age, &height, &weight); // считываем целое значение в переменную age
  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;
    switch (gender) {
      case 'f':   printf("|  BMR  |\n");
                  printf("|%.2f|\n", bov_f); break;
      case 'm':   printf("|  BMR  |\n");
                  printf("|%.2f|\n", bov_m); break;
      default : printf("ERROR");
    }
//  printf("Vash rost?(cm)\n");
//  scanf("%d", &height); // считываем  значение в переменную height

//  printf("Vash ves?(kg)\n");
//  scanf("%d", &weight); // считываем значение в переменную weight


//  printf("|       BMR       |\n");
//  printf("|  male  | female |\n");
//  printf("|%8.2f|%8.2f|\n",bov_m, bov_f);

  return 0;
}