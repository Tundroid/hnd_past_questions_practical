#include <stdio.h>

void swap(int *a, int *b); // function declaration or prototype

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping [first number = %d, second number = %d]\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping [first number = %d, second number = %d]\n", num1, num2);

    return 0;
}

void swap(int *a, int *b) {
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}