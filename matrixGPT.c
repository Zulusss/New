// src/matrix.c

#include <stdio.h>
#include <stdlib.h>

// Функция для выделения памяти под статическую матрицу
int createStaticMatrix(int rows, int cols) {
    static int matrix100100;
    return (int)matrix;
}

// Функция для выделения памяти под динамическую матрицу с помощью malloc
int createDynamicMatrixMalloc(int rows, int cols) {
    int matrix = (int)malloc(rows  sizeof(int));
    if (matrix == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        matrixi = (int)malloc(cols  sizeof(int));
        if (matrixi == NULL) {
            for (int j = 0; j < i; j++) {
                free(matrixj);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

// Функция для выделения памяти под динамическую матрицу с помощью calloc
int createDynamicMatrixCalloc(int rows, int cols) {
    int matrix = (int)calloc(rows, sizeof(int));
    if (matrix == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int)calloc(cols, sizeof(int));
        if (matrixi == NULL) {
            for (int j = 0; j <= i; j++) {
                free(matrixj);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

// Функция для выделения памяти под динамическую матрицу с помощью realloc
int createDynamicMatrixRealloc(int rows, int cols) {
    int matrix = (int)malloc(rows  sizeof(int));
    if (matrix == NULL) {
        return NULL;
    }
    for (int i = 0; i < rows; i++) {
        matrixi = (int)realloc(NULL, cols  sizeof(int));
        if (matrixi == NULL) {
            for (int j = 0; j < i; j++) {
                free(matrixj);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

// Функция для освобождения памяти
void freeMatrix(int matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrixi);
    }
    free(matrix);
}

// Функция для ввода матрицы
void inputMatrix(int matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrixij) != 1) {
                printf("n/a");
                return;
            }
        }
    }
}

// Функция для вывода матрицы
void outputMatrix(int matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j < cols - 1) {
                printf("%d ", matrixij);
            } else {
                printf("%d", matrixij);
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
    int matrix;

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