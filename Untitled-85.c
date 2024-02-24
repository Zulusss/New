#include <stdio.h>
int main () {
int x=0, y=0, b;
char b = 2*x;
int res = scanf ("%d", &x);
    switch('-'){
        case '-': printf("minus\n"); break;
        case 1: printf("Kopengagen\n"); break;
        case 0: printf("hot_dog\n"); break;
        default: printf("ne srabolalo\n");
        }
int res2 = scanf ("%d", &y);
printf("res = %d, res2 = %d, %d, %d", res, res2, x, y);
return 0;
}