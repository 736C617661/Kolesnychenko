#include <stdio.h>
#include <math.h>

int main() {
    double x; 
    double y; 

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);

    printf("При x = %f, y = %f\n", x, y);

    return 0;
}
