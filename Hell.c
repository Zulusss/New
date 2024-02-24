#include <stdio.h>

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int a, b;
    char c;
//    printf("Введите два числа через пробел:");

    if (scanf("%d %d%c", &a, &b, &c) != 3 || c !='\n') {
        printf("n/a");
        return 1; 
    }
    int max = findMax(a, b);
    printf("%d", max);

    return 0;
}
