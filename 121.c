#include <stdio.h>
#include <locale.h> // для функции setlocale

int main(void) { 
  setlocale(LC_ALL, "utf8"); // чтобы использовать русские символы
  
  //printf("Выберите правильный вариант ответа. Начало и конец Второй мировой войны:\n");
  //printf("  a. 1 сентября 1939 -- 2 сентября 1945\n");
  //printf("  b. 1 сентября 1939 -- 9 мая 1945\n");
  //printf("  c. 22 июня 1941 -- 9 мая 1945\n");
  //printf("  d. 22 июня 1941 -- 2 сентября 1945\n");
  
  int k; 
  //printf("Оценка: ");
  scanf("%d", &k);

  switch (k%10) {
    case 1: printf("Любит\n"); break;
    case 2: printf("Не любит\n"); break;
    case 3: printf("Любит\n"); break;
    case 4: printf("Не любит\n"); break;
    case 5: printf("Любит\n"); break;
    case 6: printf("Не любит\n"); break;
    case 7: printf("Любит\n"); break;
    case 8: printf("Не любит\n"); break;
    case 9: printf("Любит\n"); break;
    case 0: printf("Не любит\n"); break;
  //  default:  printf("ERROR!\n"); break;
  }

  return 0;
}