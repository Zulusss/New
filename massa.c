#include <stdio.h>
double converse (int fn);
    int main(){
        int fn;
        //double kg;
        scanf("%d", &fn);
        printf("%.2f", converse(fn));
        return 0;
    }
    double converse (int fn)
    {
        double kg = fn * 0.454;
        return kg;
    }