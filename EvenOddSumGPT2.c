#include <stdio.h>

void sum(int b)
{
    // Статические переменные для подсчета четных и нечетных чисел
    //printf("%d\n", b);
    if (b > 0) {
        int even_count = even_count++; // Увеличиваем счетчик четных чисел
    } else {
        int odd_count = odd_count++; // Увеличиваем счетчик нечетных чисел
    }
}

int print_even_x(int x)
{
    int b = (x % 2 == 0) ? 1 : -1;
    return b;
}

int main()
{
    int x, i;
    static int even_count = 0, odd_count = 0;
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &x);
        sum(print_even_x(x));
    }

    int diff = even_count - odd_count; // Вычисляем разность между четными и нечетными числами
    printf("Difference between even and odd numbers: %d\n", diff);

    return 0;
}
