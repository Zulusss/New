#include <stdio.h>

int main() {
    int number, reversedNumber;

    do {
        printf("Enter a three-digit number: ");
        scanf("%d", &number);
    } while (number < 100 || number > 999);

    reversedNumber = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
