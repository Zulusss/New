#include <stdio.h>
#include <math.h>
    int main(){
        int k;
        scanf("%d", &k);
        double n = 7.5*pow(10,10) * exp(-(log(2)/5570)*k);
        n = round(n*0.0000001)*0.01;
        printf("%.2f", n);
        return 0;
    }