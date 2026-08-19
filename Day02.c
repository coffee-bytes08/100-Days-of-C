// Q3: Program to calculate the area and perimeter of a rectangle.
#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f", perimeter);

    return 0;
}
