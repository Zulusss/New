#include <stdio.h>

int main() {
    char a, b, c, sign;
    char ch;
    if (scanf("%c%c%c%c%c", &sign, &a, &b, &c, &ch) != 5 || (sign != '-' && (sign < '0' || sign > '9')) || (a < '0' || a > '9') || (b < '0' || b > '9') || (c < '0' || c > '9') || ch != '\n') {
        printf("n/a");
        return 1;
    }
    printf("%c%c%c%c\n", sign, c, b, a);
    return 0;
}
