#include <stdio.h>

int main(void) {

  int k=1, l=1;
  char d;

  printf("k = %d l = %d\n", k, l);
  switch (scanf("%c %d %d", &d, &k, &l)){
    case 3:
        switch (d) {
            case '+': printf("%.2f\n", (double)k+l); break;
            case '-': printf("%.2f\n", (double)k-l); break;
            case '*': printf("%.2f\n", (double)k*l); break;
            case '/': printf("%.2f\n", (double)k/l); break;
            default:  printf("ERROR!\n"); break;
            }; break;
    default:
        printf("ERROR!!\n"); break;
  }
  printf("k = %d l = %d\n", k, l);

  return 0;
}