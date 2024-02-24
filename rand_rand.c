#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    for(int x = rand() % 10; x != 0; x = rand() % 10)
        srand(time(NULL));
        printf("x = %d\n", x);
 
    return 0;
}