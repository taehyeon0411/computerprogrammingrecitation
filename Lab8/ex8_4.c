#include <stdio.h>

#define SIZE 5

int calculateAbsoluteSum(int arr[], int size);

int main(void) {

    int arr[SIZE];

    printf("Enter 5 integers: ");

    for(int i = 0; i <= 4; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Sum of absolute values: %d\n", calculateAbsoluteSum(arr, SIZE));
}

int calculateAbsoluteSum(int arr[], int size) {
    int absSum = 0;

    for(int i = 0; i < size; i++ ) {
        if(arr[i] >= 0) {
            absSum += arr[i];
        } else {
            absSum += -arr[i];
        }
    }
    return absSum;
}   