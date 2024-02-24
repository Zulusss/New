#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int rand_digit = rand()%4+1;
    printf("%d\n", rand_digit);
    return 0;
}