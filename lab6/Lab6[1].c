#include <stdio.h>

void main() {
  int n, i, j;

  // Введення розміру матриці
  printf("Введіть розмір матриці (n x n): ");
  scanf("%d", &n);

  // Створення матриці
  int A[n][n];
  printf("Введіть елементи матриці:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  // Перетворення матриці
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i + j == n - 1) {
        A[i][j] = 0;
      } else {
        A[i][j] *= A[i][j];
      }
    }
  }

  // Виведення перетвореної матриці
  printf("Перетворена матриця:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}
