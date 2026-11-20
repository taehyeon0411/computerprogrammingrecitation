#include <stdio.h>

void input2D(int arr[][4], int rows);
int sum2D(int arr[][4], int rows);

int main(void)
{
    int score[3][4];
    int total;
    double average;

    input2D(score, 3);
    total = sum2D(score, 3);
    average = total / 12.0;

    printf("Sum: %d, Average: %.2f\n", total, average);
    return 0;
}

void input2D(int arr[][4], int rows)
{
    int i, j;

    for (i = 0; i < rows; i++) {
        printf("Student %d: ", i + 1);

        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int sum2D(int arr[][4], int rows)
{
    int i, j;
    int total = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < 4; j++) {
            total += arr[i][j];
        }
    }

    return total;
}
