#include <stdio.h>
    int main(){
        int a, b, c, d;
        scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
        if (a==9||a==8||a==7) {
            a = a-7;
        }else{
            a = a+3;
        }
        if (b==9||b==8||b==7) {
            b = b-7;
        }else{
            b = b+3;
        }
        if (c==9||c==8||c==7) {
            c = c-7;
        }else{
            c = c+3;
        }
        if (d==9||d==8||d==7) {
            d = d-7;
        }else{
            d = d+3;
        }
        printf("%d%d%d%d", c, d, a, b);
        return 0;
    }