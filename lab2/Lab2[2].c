#include <stdio.h>

int main() {
    double a = 7.0, b = 12.0, c = -21.0;
    double result = ((a - b) / (2 * b + c)) + (1 / a);

    printf("Значення функції (((a-b)/(2b+c))+(1/a)), де a = %.2f, b = %.2f, c = %.2f, є: %.5f\n", a, b, c, result);

    return 0;
}
