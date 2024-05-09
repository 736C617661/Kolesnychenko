#include <stdio.h>
#include <math.h>

double calculate_f_full(double x) {
    double result;
    if (x < -10) {
        result = 3 * pow(x, 3) - pow(x, 2);
    } else {
        if (-10 <= x && x <= 10) {
            result = sqrt(10 - x);
        } else {
            result = 2 * x + 1;
        }
    }
    return result;
}

int main() {
    double x_value;
    printf("Введіть значення x: ");
    scanf("%lf", &x_value);

    double result_full = calculate_f_full(x_value);
    printf("f(%.2lf) = %.2lf\n", x_value, result_full);

    return 0;
}
