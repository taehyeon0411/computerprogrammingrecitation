#include <stdio.h>

int main(void)
{
    FILE *fp;
    int n, i;

    printf("Enter a number (2-9): ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 9)
        return 1;

    fp = fopen("table.txt", "w");
    if (fp == NULL) {
        printf("Cannot open the file.\n");
        return 1;
    }

    fprintf(fp, "Multiplication Table of %d\n", n);

    for (i = 1; i <= 9; i++) {
        fprintf(fp, "%d x %d = %d\n", n, i, n * i);
    }

    if (ferror(fp)) {
        fclose(fp);
        fprintf(stderr, "Cannot write to the file.\n");
        return 1;
    }

    if (fclose(fp) != 0) {
        fprintf(stderr, "Cannot close the file.\n");
        return 1;
    }

    printf("The table of %d was saved to table.txt.\n", n);

    return 0;
}
