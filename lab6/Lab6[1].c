#include <stdio.h>

void main() {
  int n, i, j, check;
  char ch;

  printf("Введіть розмір матриці (n x n): ");
  check = scanf("%d", &n);
  ch = getchar();

  if (check == 0 || ch != '\n') {
    printf("Помилка: введіть число, а не літеру або число з літерами.\n");
    return;
  }

  int A[n][n];
  printf("Введіть елементи матриці:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      check = scanf("%d", &A[i][j]);
      ch = getchar();
      if (check == 0 || ch != '\n') {
        printf("Помилка: введіть число, а не літеру або число з літерами.\n");
        return;
      }
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i + j == n - 1) {
        A[i][j] = 0;
      } else {
        A[i][j] *= A[i][j];
      }
    }
  }

  printf("Перетворена матриця:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}
