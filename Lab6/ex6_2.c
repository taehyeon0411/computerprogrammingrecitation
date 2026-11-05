#include <stdio.h>

int power(int a, int n);

int main(void)
{
    int a, n;

    printf("Enter the base (a) and exponent (n): ");
    if (scanf("%d %d", &a, &n) != 2 || n < 0) {
        return 1;
    }

    printf("Result: %d\n", power(a, n));

    return 0;
}

int power(int a, int n)
{
    if (n == 0) {
        return 1;
    }

    return a * power(a, n - 1);
}
