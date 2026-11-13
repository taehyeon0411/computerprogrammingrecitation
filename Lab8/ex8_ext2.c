
#include <stdio.h>

#define SIZE 10

void printEven(int arr[], int size);
void printOdd(int arr[], int size);

int main(void) {
    int arr[SIZE];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printEven(arr, SIZE);
    printOdd(arr, SIZE);

    return 0;
}

void printEven(int arr[], int size) {
    printf("Even numbers:");

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf(" %d", arr[i]);
        }
    }

    printf("\n");
}

void printOdd(int arr[], int size) {
    printf("Odd numbers:");

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf(" %d", arr[i]);
        }
    }

    printf("\n");
}
