#include <stdio.h>
#include <stdbool.h>
int main () {
    int x=0, y=0, z=0;
    scanf("%d, %d, %d", &x, &y, &z);
    bool new_x = x>0;
    bool new_y = y>0;
    bool new_z = z>0;
    printf("%d, %d, %d\n", new_x, new_y, new_z);

    printf("%d", new_x + new_y + new_z);
    return 0;


}