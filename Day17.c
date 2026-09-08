// Q33: Program to check whether a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, temp, digit;
    int digits = 0;
    int sum = 0;
    int power;
    int i;

    scanf("%d", &n);

    original = n;
    temp = n;

    if (n == 0) {
        digits = 1;
    }
    else {
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }
    }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}