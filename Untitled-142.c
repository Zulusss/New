#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mass[n];
    int even[n];
    int odd[n];
    int j = 0; 
    int k = 0;

    // Ввод значений в массивы (отбор четных и нечетных чисел)
    for (int i = 0; i < n; i++) {
        scanf("%d", &mass[i]);
        if (mass[i] % 2 == 0) {
            even[j] = mass[i];
            j++;
        } else {
            odd[k] = mass[i];
            k++;
        }
    }

    // Вывод массива четных чисел
    //printf("Четные числа: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }

    // Вывод массива нечетных чисел
    //printf("\nНечетные числа: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
