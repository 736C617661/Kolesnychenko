#include <stdio.h>

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int arr[n];
    printf("Введіть %d цілих чисел: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int product_positive = 1;
    int sum_until_last_positive = 0;
    int last_positive_index = -1;

    for(int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            product_positive *= arr[i];
            last_positive_index = i;
        }
    }

    for(int i = 0; i < last_positive_index; i++) {
        sum_until_last_positive += arr[i];
    }

    printf("Добуток додатних елементів масиву: %d\n", product_positive);
    printf("Сума елементів до останнього додатного елемента: %d\n", sum_until_last_positive);

    return 0;
}
