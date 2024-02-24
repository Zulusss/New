#include <stdio.h>
#include <math.h>

int main() {
    char a, b, c, d;
    int res;
    
    scanf("%c%c%c%c", &a, &b, &c, &d);
    
    // Convert characters to integers
    int int_a = a - '0';
    int int_b = b - '0';
    int int_c = c - '0';
    int int_d = d - '0';
    
    // Calculate decimal value of binary number
    res = int_a * pow(2, 3) + int_b * pow(2, 2) + int_c * pow(2, 1) + int_d * pow(2, 0);
    
    printf("%d %d %d %d\n", int_a, int_b, int_c, int_d);
    printf("%d", res);
    
    return 0;
}
