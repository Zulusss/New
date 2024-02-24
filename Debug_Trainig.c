#include <stdio.h>

int main() {
    int n, b, c;
    scanf("%d", &n);
    b = n%10;
    c = n/11;

            switch (b) {
                case 1: printf("Мне %d год", n); break;
                            switch (c) {
                                  case 1: printf("Мне 11 лет"); break;
                            }  
      
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