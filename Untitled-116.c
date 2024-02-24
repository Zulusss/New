#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n<500) printf("350");
    else printf("%d", (n-500)*2+350);
    

    return 0;
}