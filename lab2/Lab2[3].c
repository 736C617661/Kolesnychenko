#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    double result;

    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    printf("Введіть ціле число y: ");
    scanf("%d", &y);
    printf("Введіть ціле число z: ");
    scanf("%d", &z);
  
    result = (1 + cos(y - 2)) / ((pow(x, 4) / 2) + pow(sin(z), 2));

    printf("Результат обчислення: %.4f\n", result);

    return 0;
}
