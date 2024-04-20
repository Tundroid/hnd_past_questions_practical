#include <stdio.h>

#define CORRECT_PIN 1234

int main(void) {
    int pin;

    printf("Enter the passdigit: ");
    scanf("%d", &pin);

    while (pin != CORRECT_PIN) {
         printf("Enter the correct passdigit: ");
        scanf("%d", &pin);
    }

    printf("Contidion is satisfied, you may have access!");

    return 0;
}