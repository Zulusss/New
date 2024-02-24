#include <stdio.h>
#include <math.h>
    int main(){
        double y, z = 57.26;
        char c;
        int x;
        if (scanf("%d%c", &x, &c) == 2 && c == '\n') {
            y = x * z;
            y = round (y);
            printf("%.0f", y);
            } else {
                puts("n/a");
            }
    return 0;
    }