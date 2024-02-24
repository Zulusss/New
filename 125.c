#include <stdio.h>
#include <locale.h> // для функции setlocale

int main(void) { 
  setlocale(LC_ALL, "utf8"); // чтобы использовать русские символы
    
  int k, l; 
  char d;

  scanf("%d %d %c", &k, &l, &d);

  switch (d) {
    case '+': printf("%.2f\n", (double)k+l); break;
    case '-': printf("%.2f\n", (double)k-l); break;
    case '*': printf("%.2f\n", (double)k*l); break;
    case '/': 
      switch (l) {
        case 0: printf("ERROR сука!\n"); break;//непонятно, разобраться
        default: printf("%.2f\n", (double)k/l); break;
      } break;
    default:  printf("ERROR!\n"); break;
    }

  return 0;
}