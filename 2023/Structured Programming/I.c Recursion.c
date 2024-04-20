#include <stdio.h>

int power(int base, int pwr);

int main() {
    int pwr;
    const int base = 3;

    printf("Enter an integer: ");
    scanf("%d", &pwr);
    
    if (pwr < 0)
        pwr *= -1;

    printf("%d^%d = %d", base, pwr, power(base, pwr));

    return 0;
}

int power(int base, int pwr) {
    if (pwr == 0)
        return 1;
    else if (pwr == 1)
        return base;
    else
        return base * power(base, pwr - 1);
}