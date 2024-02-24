#include <stdio.h>

int main () {
    int a, b, c, res, summ;
   // printf ("ВВВе ДИТЕ  число\n");
    scanf("%d", &a);
    b = a/100;
    c = a/10 %10;
    res = a % 10;
    summ = res * 100 + c * 10 + b;
    printf("%d", summ);
return 0;
}