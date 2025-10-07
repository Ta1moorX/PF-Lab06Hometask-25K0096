#include <stdio.h>

int main() {
    int a, b, result = 0, count = 0, tempA, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 0; i < b; i++) {
        result += a;
    }
    printf("Multiplication = %d\n", result);

    tempA = a;
    while (tempA >= b) {
        tempA = tempA - b;
        count++;
    }
    printf("Division Quotient = %d\n", count);

    return 0;
}
