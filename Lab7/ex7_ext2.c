x#include <stdio.h>
#define SIZE 10

int main(void) {
    int num[SIZE];
    int copied[SIZE] = {0};
    int start, end;
    int j = 0;

    printf("Please enter 10 numbers : ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter the starting and ending position ( 1 - 10 ) to copy : ");
    scanf("%d %d", &start, &end);

    for (int i = start - 1; i < end; i++) {
        copied[j] = num[i];
        j++;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", copied[i]);
    }
    printf("\n");

    return 0;
}
