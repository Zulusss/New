#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char check;
    
    if((scanf("%d%c", &n, &check) == 2) && (check == '\n') && (n > 0)){
        int **matrix = (int**)malloc(n * sizeof(int*)); 
        for(int i = 0; i < n; i++){
            matrix[i] = (int*)malloc(n * sizeof(int));
        }

        int count = 0;
        int row = 0;
        int col = 0;
        int maxrow = n;
        int maxcol = n;
        int minrow = 0;
        int mincol = -1;
        int dir = 1;

        while(count < n * n){
            if(dir == 1){
                matrix[row][col++] = ++count;
                if(col == maxcol){
                    col--;
                    row++;
                    maxcol--;
                    dir++;
                }
            } else if (dir == 2){
                matrix[row++][col] = ++count;
                if(row == maxrow){
                    row--;
                    col--;
                    maxrow--;
                    dir++;
                }
            } else if (dir == 3){
                matrix[row][col--] = ++count;
                if(col == mincol){
                    col++;
                    row--;
                    mincol++;
                    dir++;
                }
            } else if (dir == 4){
                matrix[row--][col] = ++count;
                if(row == minrow){
                    row++;
                    col++;
                    minrow++;
                    dir = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d", matrix[i][j]);
                if(j != n - 1){
                    printf(" ");
                }
            }
            if(i != n - 1){
                printf("\n");
            }
        }
    } else {
        printf("n/a");
    }

    return 0;
}