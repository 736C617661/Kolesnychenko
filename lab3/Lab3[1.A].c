#include <stdio.h>
#include <math.h>

double calculate_f(double x) {
    if (x < -10) {
        return 3 * pow(x, 3) - pow(x, 2);
    } else if (x >= -10 && x <= 10) {
        return sqrt(10 - x);
    } else {
        return 2 * x + 1;
    }
}

int main() {
    double x_value;
    printf("Введіть значення x: ");
    scanf("%lf", &x_value);

    double result = calculate_f(x_value);
    printf("f(%.2lf) = %.2lf\n", x_value, result);

    return 0;
}
