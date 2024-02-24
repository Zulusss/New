#include <stdio.h>
#include <math.h>
    int main(){
        int k, a, b, c, d, res1, res2, res3, res4;
        scanf("%d %d %d %d %d", &k, &a, &b, &c, &d);
        res1 = a + k;
        if (res1>=26) res1 = res1 % 26;
        res2 = b + k;
        if (res2>=26) res2 = res2 % 26;
        res3 = c + k;
        if (res3>=26) res3 = res3 % 26;
        res4 = d + k;
        if (res4>=26) res4 = res4 % 26;
        printf("%d %d %d %d", res1, res2, res3, res4);
        return 0;
    }