#include <stdio.h>
#include <math.h>

int main() {
    int x, y, n, m;
    scanf("%d %d", &x, &y);
    n = x - x;

    switch (1 - ((x-y) != 0) * ((y-x) != 0) * 2) {
        case 0: 
            printf("+\n");
            break;
        default: 
            switch (2 - (((x > y) || (x == y)) + ((x < y) || (x == y)))) {
                case 0: 
                    printf("dumb\n"); 
                    break;
                case 1: 
                    printf("++\n"); 
                    break;
                default: 
                    printf("--\n"); 
                    break;
            }
    }

    switch (1 - (!(x / y)) * (!(y / x)) * 2) {
        case 0: 
            printf("zavali_ebalo\n"); 
            break;
        default: 
            switch (2 - (!(x / y) + !(y / x))) {
                case 0: 
                    printf("dumbest\n"); 
                    break;
                case 1: 
                    printf("+++\n"); 
                    break;
                default: 
                    printf("---\n"); 
                    break;
            }
    }

    n = (x % 10) / (x % 10);
    m = pow(1, y);
    printf("%d %d\n", n, m);
    return 0;
}