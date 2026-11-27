#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

void calculateRectangle(struct Rectangle r);

int main(void)
{
    struct Rectangle r;

    printf("Enter width: ");
    if (scanf("%f", &r.width) != 1)
        return 1;

    printf("Enter height: ");
    if (scanf("%f", &r.height) != 1)
        return 1;

    printf("\n");
    calculateRectangle(r);

    return 0;
}

void calculateRectangle(struct Rectangle r)
{
    float area = r.width * r.height;
    float perimeter = 2 * (r.width + r.height);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
}
