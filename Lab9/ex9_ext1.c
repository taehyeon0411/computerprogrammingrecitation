
#include <stdio.h>

void calculate(int *a, int *b);

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    calculate(&a, &b);

    return 0;
}

void calculate(int *a, int *b)
{
    printf("Addition: %d\n", *a + *b);
    printf("Subtraction: %d\n", *a - *b);
    printf("Multiplication: %d\n", *a * *b);

    if (*b == 0) {
        printf("Division: Cannot divide by zero\n");
    } else {
        printf("Division: %.2f\n", (double)*a / *b);
    }
}
