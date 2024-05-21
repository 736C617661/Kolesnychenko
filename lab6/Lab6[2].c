#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main() {
    srand(time(0));
    double matrix[SIZE][SIZE];
    double min = 101.0;

    printf("Матриця:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = (double)rand() / RAND_MAX * 200.0 - 100.0;
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 1; i < SIZE; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("Мінімальний елемент нижче головної діагоналі: %.2f\n", min);

    return 0;
}
