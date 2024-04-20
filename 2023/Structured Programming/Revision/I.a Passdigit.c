#include <stdio.h>

int main() {
    int pass_digit;

    printf("Enter the passdigit: "); // prompt user for input
    scanf("%d", &pass_digit); // read integer from keyboard and store in pass_digit variable

    while (pass_digit != 1234) { // repeat loop body until pass_digit is correct (i.e. is equal to 1234)
        printf("Enter the correct passdigit: ");
        scanf("%d", &pass_digit);
    }

    printf("Condition is satisfied, you may have acces!");

    return 0;
}