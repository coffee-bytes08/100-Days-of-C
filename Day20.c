// Q39: Program to find the product of the odd digits of a number.
#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}
