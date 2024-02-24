#include <stdio.h>
int main () {
char x,y;
int res = scanf ("%c,%c", &x, &y);
printf("res = %d, %c, %c", res, x, y);
return 0;
}