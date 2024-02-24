#include <stdio.h>
    int main(){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", (a%b==0)? 0 : a%b);
        return 0;
    }