#include <stdio.h>

int main() {
    int b1, b2, b3, b4;
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

    if (b1 == 1 && b2 == 0 && b3 == 2 && b4 == 4) {
        printf("open");
    } else {
        printf("close");
    }

    return 0;
}