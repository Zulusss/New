#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int rand_digit = rand()%4+1;
    int x=2, y=-4, a;
    
    
    scanf("%d, %d", &x, &y);
        switch (x){
            case 0: printf("Odin\n"); break;
            case 2: printf("1\n"); return 0;
//            default: printf("NO\n");
        }
    a = 2*x + y;
    printf("%d\n", a);
    printf("%d\n", rand_digit);
    return 0;
}