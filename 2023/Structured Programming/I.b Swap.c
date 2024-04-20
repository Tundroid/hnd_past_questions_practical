#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping, [first number = %d, second number = %d]\n", a, b);
    swap(&a, &b);
    printf("After swapping, [first number = %d, second number = %d]\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}