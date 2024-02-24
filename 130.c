#include <stdio.h>

int main() {
    int n, num;
    scanf("%d %d", &n, &num);
        switch (n) {
            case 1: printf("%d", num); break;
            case 2: printf("%d", (num/10)*(num%10)); break;
            case 3: printf("%d", (num/100)*(num/10%10)*(num%10)); break;
            case 4: printf("%d", (num/1000)*(num/100%10)*(num/10%10)*(num%10)); break;
        }
    return 0;
}