#include <stdio.h>

int main() {
    int n, last, first, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10) {
        n = n / 10;
    }

    first = n;
    sum = first + last;

    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}
