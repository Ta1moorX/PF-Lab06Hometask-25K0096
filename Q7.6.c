#include <stdio.h>

int main() {
    int n, i, fact;
    char choice = 'y';

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        fact = 1;

        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }

        printf("Factorial = %d\n", fact);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y');

    return 0;
}
