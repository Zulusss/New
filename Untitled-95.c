#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int rand_digit = rand()%4+1;
    int x=2, y=-4, a;
    a = x - 2;
    scanf("%d, %d", &x, &y);
        switch (x){
            case 0: printf("Odin\n"); break;
            case 2: printf("4\n"); return 0;
//            default: printf("NO\n");
        }
    printf("%d\n", rand_digit);
    return 0;
}