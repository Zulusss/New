#include <stdio.h>
#include <stdlib.h>

#define WIDTH 30
#define HEIGHT 10

char init_pole(void);
void output(char arr[][WIDTH]);

int main()
{
    init_pole();
    return 0;
}

char init_pole(void)
{
    char pole[HEIGHT][WIDTH];

    for(int row = 0; row < HEIGHT; row++){
        for(int coll = 0; coll < WIDTH; coll++){
            if(row == 0 || row == HEIGHT - 1){
                pole[row][coll] = '=';
            }
            else{
                pole[row][coll] = '-';
            }
            printf("%c", pole[row][coll]);
        }
        puts("");
    }

    return pole;
}

void output(char arr[][WIDTH])
{

}
