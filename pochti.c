#include <stdio.h>
int main () {
char x, y;

int res = scanf ("%c, %c", &x, &y);
        switch (x){
            case '-': printf("min\n");
            case 1: printf("odin\n");
            default: printf("plus\n");
        }
//int b = 
printf("res = %d, %c, %c", res, x, y);
return 0;
}