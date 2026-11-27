#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    int sum = 0;

    printf("Enter the number of integers to allocate: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000)
        return 1;

    arr = malloc(n * sizeof *arr);

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    for (int i = 0; i < n; i++)
        sum += arr[i];

    printf("Sum: %d\n", sum);

    free(arr);
    return 0;
}
