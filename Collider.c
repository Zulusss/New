#include <stdio.h>

int main () {
    int a, b, c, res, summ;
    scanf("%d", &a);
    b = a/100;
    c = a/10 %10;
    res = a % 10;
    summ = res * 10 + c*100 + b;
    printf("%d", summ);
return 0;
}