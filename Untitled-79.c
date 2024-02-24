#include <stdio.h>
#include <math.h>
int main () {
    int x, y;
    scanf("%d %d", &x, &y);
        switch (x-y){
            case 0: printf("odinakovye\n"); printf("%d %d", x+x, (x*x)-(2*sqrt(x)));
                switch (scanf("%*c", &x)){
                    case '-': printf("minus");break;
                    default: printf("plus");break;
                }
            default: printf("raznye");
        }
return 0;
}