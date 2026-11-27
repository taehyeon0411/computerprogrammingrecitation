#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, x;
    int count = 0;
    int *arr;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    arr = malloc((size_t)n * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    printf("Enter x: ");
    if (scanf("%d", &x) != 1) {
        free(arr);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("Count of %d: %d\n", x, count);

    free(arr);
    return 0;
}
