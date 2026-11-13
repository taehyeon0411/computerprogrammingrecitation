#include <stdio.h>

int main(void)
{
    int a[3][2], b[3][2];
    int result[3][2];
    int i, j;

    printf("Enter the first matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Result matrix:\n");

    for (i = 0; i < 3; i++) {
        printf("%d %d\n", result[i][0], result[i][1]);
    }

    return 0;
}
