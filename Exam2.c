#include <stdio.h>
int main(){
    int x, y, z;
    char ch;
    if (scanf("%d%d%d%c", &x, &y, &z, &ch) !=4 || ch!='\n') {
        printf("n/a");
        return 1;
    }
    (x==1 && (z==1 || y==1)) ? (printf("1")) : (printf("0"));
    printf("%c", ch);
    return 0;
}