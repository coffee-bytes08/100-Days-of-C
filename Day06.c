// Q12: Program to check whether a number is positive, negative, or zero.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}
