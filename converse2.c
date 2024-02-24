#include <stdio.h>
void pr(double res)
{
    printf("%f\n", res);
    //return res;
}
double converse(int ft, int in)
{
    double (ft) = (double) in * 12;
    
    double cm = (double)in / 2.54;
    double m = (double) cm * 100;
    double res = m + cm * 0.01;
    return res;
}
    int main(){
        int ft, in;
        scanf("%d %d", &ft, &in);
        pr(converse(ft, in));
        //printf("%d\n", pr(res));
        return 0;
    }