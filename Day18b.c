#include <stdio.h>

int main() {
    int a, b, hcf;

    scanf("%d %d", &a, &b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;

    printf("%d", hcf);

    return 0;
}
