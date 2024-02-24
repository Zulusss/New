#include <stdio.h>

int main() {
    char a, b, c;
    char ch;
    if (scanf("%c%c%c%c", &a, &b, &c, &ch) != 4 || (a < '0' || a > '9') || (b < '0' || b > '9') || (c < '0' || c > '9') || ch != '\n') {
        printf("n/a");
        return 1;
    }
    printf("%c%c%c\n", c, b, a);
    return 0;
}
