#include <stdio.h>
#include <math.h>
    int main(){
        double ft, in, res, ft2;
        scanf("%le %le", &ft, &in);
        ft2 = ft * 12;
        //cm = in / 2.54;
        res = (ft2+in)*2.54;
        printf("%.f'%.f\" = %.2f m", ft, in, round(res)/100);
        return 0;
    }