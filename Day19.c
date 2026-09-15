#include <stdio.h>

int main() {
    int a, b, x, y, hcf, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    hcf = x;

    lcm = (a * b) / hcf;

    printf("%d", lcm);

    return 0;
}