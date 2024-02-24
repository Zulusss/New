#include <stdio.h>
#include <locale.h> // для функции setlocale

int main(void) { 
  setlocale(LC_ALL, "utf8"); // чтобы использовать русские символы
    
  int k, l, m; 
  char d;

  scanf("%c %d %d", &d, &k, &l);

  switch (d) {
    case '+': printf("%.2f\n", (double)k+l); break;
    case '-': printf("%.2f\n", (double)k-l); break;
    case '*': printf("%.2f\n", (double)k*l); break;
    case '/': (double)k/l, &m;
      switch (m) {
        case 1: printf("ERROR!\n"); break;//непонятно, разобраться
        default: printf("%.2f\n", (double)k/l); break;
      }
    default:  printf("ERROR!\n"); break;
    }

  return 0;
}