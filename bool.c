#include <stdio.h>
#include <stdbool.h>
int main () {
    int x = 89, y = 13, z = 78;
    bool new_x = x>0, new_y = y>0, new_z = z>0;
    printf("%d, %d, %d", new_x, new_y, new_z);
    scanf("%d, %d, %d", &x, &y, &z);
    printf("%d", new_x + new_y + new_z);
    return 0;


}