#include <stdio.h>

void minMax(int arr[], int n, int *min, int *max);

int main(void)
{
    int arr[20];
    int n, i;
    int min, max;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) {
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    minMax(arr, n, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}

void minMax(int arr[], int n, int *min, int *max)
{
    int i;

    *min = arr[0];
    *max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }

        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
