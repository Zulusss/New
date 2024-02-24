#include <stdio.h>

int main() {
    int a=3, b=4, c=7, h, i;
    double j;
    h=a-b, i=a*b, j=a/(double)b;
    char d = '+', e = '-', f = '*', g = '/';
    printf("||-----|-----|-----|-----||\n");
    printf("|| act | one | two | res ||\n");
    printf("||=====+=====+=====+=====||\n");
    printf("||%5c|%-5d|%-5d|%5.5d||\n", d, a, b, c);
    printf("||%5c|%5d|%5d|%5.4d||\n", e, a, b, h);
    printf("||%5c|%5d|%-5d|%5.5d||\n", f, a, b, i);
    printf("||%-5c|%-5d|%5d|%5.3f||\n", g, a, b, j);
    printf("===========================\n");
    return 0;
}