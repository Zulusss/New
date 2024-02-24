#include <stdio.h>
int main () {
int x=0, y=0;

int res = scanf ("%d, %d", &x, &y);
        switch (x){
            case '-': printf("min\n"); break;
            case 1: printf("odin\n"); break;
            default: printf("plus\n");
        }
//int b = 
printf("res = %d, %d, %d", res, x, y);
return 0;
}