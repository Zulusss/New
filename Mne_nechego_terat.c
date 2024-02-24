#include <stdio.h>

int main() {
    int n, b;
    scanf("%d", &n);
    b = n%10;
        switch (n){
            case 11: printf("Мне 11 лет"); return 0;
            case 12: printf("Мне 12 лет"); return 0;
            case 13: printf("Мне 13 лет"); return 0;
            case 14: printf("Мне 14 лет"); return 0;
            }
   
            switch (b) {
                case 1: printf("Мне %d год", n); break;
                case 2: printf("Мне %d года", n); break;
                case 3: printf("Мне %d года", n); break;
                case 4: printf("Мне %d года", n); break;
                case 5: printf("Мне %d лет", n); break;
                case 6: printf("Мне %d лет", n); break;
                case 7: printf("Мне %d лет", n); break;
                case 8: printf("Мне %d лет", n); break;
                case 9: printf("Мне %d лет", n); break;
                case 0: printf("Мне %d лет", n); break;
                default: printf("Мне нечего терять");
//case 1: printf("Мне %d год", num); break;
//case 1: printf("Мне %d год", num); break;
//case 1: printf("Мне %d год", num); break;

//            case 2: printf("%d", (num/10)*(num%10)); break;
//            case 3: printf("%d", (num/100)*(num/10%10)*(num%10)); break;
//            case 4: printf("%d", (num/1000)*(num/100%10)*(num/10%10)*(num%10)); break;
        }
    return 0;
}