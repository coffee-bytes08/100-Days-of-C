#include <stdio.h>

int main() {
    int n;
    int sum;

    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("%d", sum);

    return 0;
}