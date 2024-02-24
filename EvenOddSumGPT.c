#include <stdio.h>

void sum(int b)
{
    int c = 0;
    printf("%d\n", b);
    if (b > 0) {
        c = c + 1;
        printf("%d", c);
    }
}

int print_even_x(int x)
{
    int b = (x % 2 == 0) ? 1 : -1;
    return b;
}

int main()
{
    int x, i, even_count = 0, odd_count = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    int diff = even_count - odd_count;
    printf("Difference between even and odd numbers: %d\n", diff);

    return 0;
}
