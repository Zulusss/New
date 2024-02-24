#include <stdio.h>
int sum (int res)
{
    res = res +2;
    return res;
}
int cnt (int s)
{
    s = s + 1;
    return s;
}
//int res = 0;
    int main(){
        int x, y, res = 0, s = 0;
        res = scanf("%d %d", &x, &y);
        printf("%d\n", sum(res));
        printf("%d\n", cnt(s));
        return 0;

    }