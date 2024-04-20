#include <stdio.h>

int power(int base, int pwr);

int main() {
    int pwr, result;

    printf("Enter power: ");
    scanf("%d", &pwr);

    result = power(3, pwr);
    printf("3^%d = %d\n", pwr, result);
}

int power(int base, int pwr) {
    if (pwr == 0)
        return 1;
    else if (pwr == 1)
        return base;
    else
        return base * power(base, pwr - 1);
}