#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("In main: &a = %p, &b = %p\n",
           (void *)&a, (void *)&b);
    printf("Before: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    printf("In swap: a points to %p, b points to %p\n",
           (void *)a, (void *)b);

    temp = *a;
    *a = *b;
    *b = temp;
}
