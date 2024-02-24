#include <stdio.h>

int main () {

    char a, b, c;
    char ch;
        if (scanf("%c%c%c%c", &a, &b, &c, &ch) != 4 || ch !='\n') {
        printf("n/a");
        return 1; 
    }
        printf("%c%c%c", c, b, a);
        return 0;
}