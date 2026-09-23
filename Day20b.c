#include <stdio.h>

int main() {
    int n, temp, digits = 0;
    int divisor = 1;
    int digit;

    scanf("%d", &n);

    temp = n;

    if (n == 0) {
        printf("1");
    }
    else {
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        while (digits > 1) {
            divisor = divisor * 10;
            digits--;
        }

        while (divisor != 0) {
            digit = n / divisor;
            n = n % divisor;

            if (digit == 0)
                printf("1");
            else
                printf("0");

            divisor = divisor / 10;
        }
    }

    return 0;
}
