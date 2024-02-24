#include <stdio.h>
    int main () {
        int a, b, c, x;
        char ch;
        if (scanf ("%d%c", &x, &ch) ==2 && ch=='\n') {
            puts ("ok");
        }else{
            puts ("n/a");
            return 0;
        }
        a = x/100;
        b = x/10%10;
        c = x%10;
        double res = c*100 + b*10 + a;
        if((c == 0) && (res > 0)) {
            printf("%03.f", res);
            return 0;
        } else {
            if ((c==0) && (res < 0)) {
                printf("%04.f", res);
                return 0;
            }
        }
        printf("%0.f", res);
    }