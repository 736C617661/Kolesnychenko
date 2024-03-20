#include <stdio.h>

int main() {
    int num1, num2;
    int product, remainder, quotient;

    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);
    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);

    product = num1 * num2; 
    remainder = num2 % num1;
    quotient = num2 / num1; 
  
    printf("Добуток чисел: %d\n", product);
    printf("Залишок від ділення другого числа на перше: %d\n", remainder);
    printf("Цілу частину від ділення другого числа на перше: %d\n", quotient);

    return 0;
}
