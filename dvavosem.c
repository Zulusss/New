#include <stdio.h>
#include <math.h>
    int main(){
        int a, b, c, d, x, res;
        scanf("%d %1d%1d%1d%1d", &x, &a, &b, &c, &d);
        res = a * pow(x,3) + b * pow(x,2) + c * pow(x,1) + d * pow(x,0);
        //printf("%d %d %d %d\n", a, b, c ,d);
        printf("%d", res);
        return 0;
    }