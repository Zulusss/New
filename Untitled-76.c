#include <stdio.h>
#include <math.h>

int main() {
    int x, y, n, m;
    scanf("%d %d", &x, &y);
    n = x - x;
    switch (x - y) {
        case 0: 
            printf("+\n");
            break;
        default: 
            switch (y - x) {
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
    switch (!(x / y)) {
        case 0: 
            printf("zavali_ebalo\n"); 
            break;
        default: 
            switch (!(y / x)) {
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