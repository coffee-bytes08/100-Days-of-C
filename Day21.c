// Q41: Program to find the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}