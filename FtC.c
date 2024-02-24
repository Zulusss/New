//C = (F — 32) * 5/9
#include <stdio.h>
#include <math.h>
double converse (int f);
    int main(){
        int f;
        //double kg;
        scanf("%d", &f);
        printf("%.2f", converse(f));
        return 0;
    }
double converse (int f)
{
double c = (((double)f - 32) * 5/9);
//c = round(c) * 0.01;
return c;
}