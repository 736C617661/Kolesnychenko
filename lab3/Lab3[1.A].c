#include <stdio.h>
#include <math.h>

double f(double x) {
    if (x < 10) return 3 * pow(x, 2) - pow(x, 3);
    if (-10 <= x && x <= 10) return sqrt(10 - x);
    if (x > 10) return 2 * x + 1;
}

int main() {
    double x;
    printf("Введіть число x: ");
    scanf("%lf", &x);
    printf("Результат: %f\n", f(x));
    return 0;
}
