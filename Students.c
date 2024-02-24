#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char lastName[100];
    int score;
} Student;

int main() {
    int N, totalScore = 0;
    printf("Введите количество студентов: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("n/a\n");
        return 1;
    }

    Student *students = (Student *)malloc(N * sizeof(Student));

    if (students == NULL) {
        printf("n/a\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("Введите фамилию и балл студента %d: ", i + 1);
        if (scanf("%s %d", students[i].lastName, &students[i].score) != 2 || students[i].score <= 0) {
            printf("n/a\n");
            free(students);
            return 1;
        }
        totalScore += students[i].score;
    }

    double averageScore = (double)totalScore / N;

    int hasMatches = 0;
    for (int i = 0; i < N; i++) {
        if (students[i].score > averageScore) {
            if (hasMatches) {
                printf(", %s", students[i].lastName);
            } else {
                printf("%s", students[i].lastName);
                hasMatches = 1;
            }
        }
    }

    if (!hasMatches) {
        printf("No_matches");
    }

    free(students);
    return 0;
}
