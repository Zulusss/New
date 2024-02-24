#include <stdio.h>
    int main(){
        int a, b, c, d;
        scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
        printf("%d%d%d%d", (c+7)%10, (d+7)%10, (a+7)%10, (b+7)%10);
        return 0;
    }