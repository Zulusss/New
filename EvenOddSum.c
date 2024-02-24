#include <stdio.h>
void sum(int b)
{
        int c = 0;
        printf("%d\n", b);
        if (b>0) {c=c+1; printf("%d", c);}
}
int print_even_x(int x)
{
//         if(x % 2 != 0)
//         printf("-1\n");
         int b = (x % 2 == 0)? 1 : -1;
         return b;
}
    int main(){
        int x, i;
        for(i=0; scanf("%d", &x), i<4;i++)
        sum(print_even_x(x));
        return 0;
    }