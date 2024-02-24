#include <stdio.h>
 
int main(void)
{
    int var_lli = 0;
    char var_d = 0;
 
    int res = scanf("%d %d", &var_lli, &var_d);
    printf("res = %d: var_lli = %d, var_d = %d\n", res, var_lli, var_d);
 
    return 0;
}