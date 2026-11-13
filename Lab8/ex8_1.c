#include <stdio.h>

int main(void)
{
    int arr[3][4];
    int i, j;
    int sum = 0;
    double average;

    printf("Enter 12 integers:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    average = sum / 12.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
