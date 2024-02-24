#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

        long long var_lli = 0;
    double var_d = 0;
 
    int res = scanf("%lld %lf", &var_lli, &var_d);
    printf("res = %d: var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);

    
        switch (x-y){
            case 0: printf("1\n"); break;
            default: printf("0\n"); break;
            }
//    printf("n=%d\n", n);

  return 0;
}