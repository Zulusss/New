#include <stdio.h>

int main() {
    int b1, b2, b3;
    scanf("%d %d %d", &b1, &b2, &b3);

    if (b1 == 4 && b2 == 2 && b3 == 8) printf("open"); 
     else {
        printf("close");
    }
    if (b1 == 2 && b2 == 4 && b3 == 8) printf("open");
     else {
        printf("close");
    }
    if (b1 == 8 && b2 == 4 && b3 == 2) printf("open");
     else {
        printf("close");
    }
    if (b1 == 8 && b2 == 2 && b3 == 4) printf("open");
     else {
        printf("close");
    }
    if (b1 == 4 && b2 == 8 && b3 == 2) printf("open");
     else {
        printf("close");
    }
    if (b1 == 2 && b2 == 8 && b3 == 4) printf("open");
     else {
        printf("close");
    }

    return 0;
}