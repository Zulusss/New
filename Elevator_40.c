#include <stdio.h>
#include <locale.h>

int main() 
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    if ( a == b && a > c)
        printf ("%d %d %d", c, a, b);
    if ( a == b && a < c)
        printf ("%d %d %d", a, b, c);
    if ( a == c && a > b)
        printf ("%d %d %d", b, a, c);
    if ( a == c && a < b)
        printf ("%d %d %d", c, a, b);
    if ( b == c && b > a)
        printf ("%d %d %d", a, b, c);
    if ( b == c && b < a)
        printf ("%d %d %d", b, c, a);

    if ( b == c && b == a)
        printf ("%d %d %d", a, b, c);

        
    if (a < b && a < c && b !=c) {
        printf ("%d ", a);
        if (c < b)
        printf ("%d %d", c, b);
        else 
        printf ("%d %d", b, c);
        }
    if (b < a && b < c && a !=c) {
        printf ("%d ", b);
        if (c < a)
        printf ("%d %d", c, a);
        else 
        printf ("%d %d", a, c);
        }
    if (c < a && c < b && a !=b) {
        printf ("%d ", c);
        if (b < a)
        printf ("%d %d", b, a);
        else 
        printf ("%d %d", a, b);
        }


    //if (age >= 7 && age <= 18)
    //    printf ("школьник");
    //if (age >= 19 && age <= 59)
    //    printf ("рабочий");
    //if (age >= 60)
    //    printf ("пенсионер");
    
    return 0;
}