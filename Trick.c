#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
//    int rand_digit = rand()%4+1;
    int x, y, res, sum=0;
//    a = x - 2;
    res = scanf("%d %d", &x, &y);
    sum = res + 2;
    (sum == 5) ? (puts ("2")) : (puts("3"));
    printf("%d\n", res);
        switch (res){
            case 0: printf("Odin\n"); break;
            case 2: printf("1\n"); break;
            case 4: printf("2\n"); break;
            case 6: printf("3\n"); break;
            case 8: printf("4\n"); break;
//            default: printf("NO\n");
        }
//    printf("%d\n", rand_digit);
    return 0;
}