#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введіть перше ціле число: ");
    scanf("%d", &a);
    printf("Введіть друге ціле число: ");
    scanf("%d", &b);
    printf("Введіть третє ціле число: ");
    scanf("%d", &c);

    if (a <= b && a <= c) {
        printf("%d є найменшим числом.\n", a);
    } else if (b <= a && b <= c) {
        printf("%d є найменшим числом.\n", b);
    } else {
        printf("%d є найменшим числом.\n", c);
    }

    return 0;
}
