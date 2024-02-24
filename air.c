#include <stdio.h>
#include <math.h>
    int main(){
        int h;
        scanf("%d", &h);
        double p = 1.29 * exp(-h*(1.25*pow(10,-4)));
        p = round(p*100)*0.01;
        printf("%.2f", p);
        return 0;
    }