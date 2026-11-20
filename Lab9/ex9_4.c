#include <stdio.h>

int main(void)
{
    int arr[5];
    int *p = arr;
    int target, i;
    int position = 0;

    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("Enter number to search: ");
    scanf("%d", &target);

    for (i = 0; i < 5; i++) {
        if (*(p + i) == target) {
            position = i + 1;
            break;
        }
    }

    if (position != 0) {
        printf("Number found at position %d\n", position);
    } else {
        printf("Number not found\n");
    }

    return 0;
}
