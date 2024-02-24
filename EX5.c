#include <stdio.h>

int main () {
    int a, summ = 1;
    int res = 1;
   puts ("число\n");
    scanf("%d", &a);

    while (a >= 1) {
        summ = a % 10;
        if (summ % 2 != 0) {
           res *= summ;
        }
a /=10;
    }
   // b = a/100;
   // c = a/10 %10;
   // res = a % 10;
   // summ = res * 100 + c * 10 + b;
    printf("%d", res);
return 0;
}