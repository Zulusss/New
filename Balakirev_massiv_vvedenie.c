#include <stdio.h>
 
#define TOTAL_MARKS                13
 
int main(void)
{
         int marks[TOTAL_MARKS];
         marks[2] = 4;
         marks[0] = 2;
         marks[12] = 5;
//       marks[13] = 1;               // никогда так не делайте!!!
 
         for(int i = 0; i < TOTAL_MARKS; ++i)
                   printf("%d ", marks[i]);
 
         return 0;
}