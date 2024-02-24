#include <stdio.h>

int main() {
    int k, total_cells = 1;

    printf("Введите количество часов (k): ");
    scanf("%d", &k);

    if (k < 0) {
        printf("Ошибка! Количество часов должно быть неотрицательным.\n");
        return 1;
    }

    for (int i = 0; i < k; i++) {
        total_cells *= 2;
    }

    printf("Через %d часов количество клеток будет равно %d\n", k, total_cells);

    return 0;
}
