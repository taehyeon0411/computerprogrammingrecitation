#include <stdio.h>
#define SIZE 10

int main(void) {
    int numbers[SIZE];
    int max;

    printf("Enter 10 integers: ");

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    for(int i = 0; i < SIZE; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum value: %d\n", max);

    return 0;
}