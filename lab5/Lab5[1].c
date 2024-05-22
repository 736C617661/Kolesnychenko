#include <stdio.h>

int main() {
    int n, i, maxIndex = 0, minIndex = 0;

    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);
    int a[n];

    printf("Введіть елементи масиву:\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        if(scanf("%d", &a[i]) != 1) {
            printf("Введене значення некоректне. Спробуйте ще раз.\n");
            i--;
            while(getchar() != '\n'); 
        } else {
            if(a[i] > a[maxIndex]) {
                maxIndex = i;
            }
            if(a[i] < a[minIndex]) {
                minIndex = i;
            }
        }
    }
printf("Найбільший елемент: a[%d] = %d\n", maxIndex, a[maxIndex]);
  printf("Найменший елемент: a[%d] = %d\n", minIndex, a[minIndex]);
    return 0;
}
