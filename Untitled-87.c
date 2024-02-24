#include <stdio.h>
int main () {
double x=0, y;
int b = x, c = y;
int res = scanf ("%d%d", &x, &y);
        switch (b){
            case '-': printf("min\n"); break;
            case 1: printf("odin\n"); break;
            default: printf("plus\n");
        }
printf("%d, %d\n", x, y);
printf("res = %d, %d, %d", res, x, y);
return 0;
}