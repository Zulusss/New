#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int** createStaticMatrix(int rows, int cols) {
    static int matrix[MAX_ROWS][MAX_COLS];
    return (int**)matrix;
}

int** createDynamicMatrixMalloc(int rows, int cols) {
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

int** createDynamicMatrixCalloc(int rows, int cols) {
    int **matrix = (int**)calloc(rows, sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)calloc(cols, sizeof(int));
    }
    return matrix;
}

int** createDynamicMatrixRealloc(int rows, int cols) {
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)realloc(NULL, cols * sizeof(int));
    }
    return matrix;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void inputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("n/a");
                return;
            }
        }
    }
}

void outputMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) {
                printf(" ");
            }
        }
        if (i < rows - 1) {
            printf("\n");
        }
    }
}

int main() {
    int choice;
    int rows, cols;

    printf("Выберите способ выделения памяти для матрицы:\n");
    printf("1. Статическое выделение\n");
    printf("2. Динамическое выделение с помощью malloc\n");
    printf("3. Динамическое выделение с помощью calloc\n");
    printf("4. Динамическое выделение с помощью realloc\n");
    if (scanf("%d", &choice) != 1) {
        printf("n/a");
        return 1;
    }

    printf("Введите количество строк и столбцов матрицы:\n");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("n/a");
        return 1;
    }

    int** matrix;
    switch (choice) {
        case 1:
            matrix = createStaticMatrix(rows, cols);
            break;
        case 2:
            matrix = createDynamicMatrixMalloc(rows, cols);
            break;
        case 3:
            matrix = createDynamicMatrixCalloc(rows, cols);
            break;
        case 4:
            matrix = createDynamicMatrixRealloc(rows, cols);
            break;
        default:
            printf("n/a");
            return 1;
    }

    if (matrix == NULL) {
        printf("n/a");
        return 1;
    }

    printf("Введите элементы матрицы:\n");
    inputMatrix(matrix, rows, cols);

    printf("Введенная матрица:\n");
    outputMatrix(matrix, rows, cols);

    freeMatrix(matrix, rows);

    return 0;
}