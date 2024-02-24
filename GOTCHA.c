#include <stdio.h>
 
int main(){
    double x, y;
    
    printf("Enter two float numbers\n");
    if (scanf("%lf %lf", &x, &y) == 2){
        if ((x * x + y * y) < 25){
            printf("GOTCHA\n");
        }
        else
            printf("MISS\n");
    }
    else
        printf("n/a\n");
 
    return 0;
}