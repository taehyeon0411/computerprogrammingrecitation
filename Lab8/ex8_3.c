#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value of *ptr: %d\n", *ptr);

    *ptr = 20;

    printf("\nAfter changing *ptr:\n");
    printf("Value of num: %d\n", num);
    printf("Value of *ptr: %d\n", *ptr);

    return 0;
}
