Введите два целых числа через пробел

#include <stdio.h>

int main() {
    int name;
    printf("Введите имя: ");
    scanf("%d", &name);
    printf("Hello, %d!\n", name);
    return 0;
}