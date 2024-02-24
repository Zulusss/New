#include <stdio.h>
#include <math.h>

int main(void){
double l, j, z;
int y, k, m, n, z2;
scanf("%d %d", &m, &n);
l = m / (double)n;
k = (int)l;
j = l - k;

y = j*10;

z = k%10;
z2 = z;

//printf("%f %d %f %d %f", l, k, j, y, z);

printf("%d %d", z2, y);

}