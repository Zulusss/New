#include <stdio.h>
void print_even_x(int x)
{
         if(x % 2 != 0)
         printf("-1\n");
         if(x % 2 == 0)
         puts("1");
}
    int main(){
        int x;
        scanf("%d", &x);
        print_even_x(x);
        return 0;
    }