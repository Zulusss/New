#include <stdio.h>
int sum(int res)
{
    res = res - 1;
    return res;
}

int main()
{
    int x, y, res = 0;
    for (int i = 4; i >= 1; i--)
    {
        res = scanf("%d %d", &x, &y);
        printf("%d\n", sum(i));
    }
    return 0;
} 