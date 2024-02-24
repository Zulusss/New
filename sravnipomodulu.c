#include <stdio.h>
//#include <math.h>
    int main(){
        int k, a, b;
        scanf("%d %d %d", &k, &a, &b);
        printf("%d %d", a%k, b%k);
        return 0;
    }