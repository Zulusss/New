#include <stdio.h>
    int main(){
        int n, k, x, res;
        scanf("%d %d %d", &n, &k, &x);
        res = k + x - n;
        if (res<0) res = n + res;
        printf("%d", res);
        return 0;
    }