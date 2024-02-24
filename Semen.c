#include <stdio.h>
//#include <math.h>
int main() {
    int d;
    scanf("%d", &d);
    d = d + 4;
    if (d%7 == 0) {
    printf("%d", d / 7);
    }else{
    printf("%d", d / 7 + 1);
    }    
  return 0;
}