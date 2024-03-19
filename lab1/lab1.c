#include <stdio.h>
#include <math.h>

int main() {
    double x; // Змінна для вводу значення x
    double y; // Змінна для зберігання результату

    // Запит на введення значення x
    printf("Введіть значення x: ");
    scanf("%lf", &x);

    // Обчислення значення функції
    y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);

    // Виведення результату
    printf("При x = %f, y = %f\n", x, y);

    return 0;
}
