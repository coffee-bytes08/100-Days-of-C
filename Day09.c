// Q17: Program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float d, root1, root2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Two distinct real roots\n");
        printf("%.2f %.2f", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);

        printf("Two equal real roots\n");
        printf("%.2f %.2f", root1, root1);
    }
    else {
        printf("Complex roots");
    }

    return 0;
}