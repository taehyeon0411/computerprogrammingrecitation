#include <stdio.h>
#define SIZE 10

int main(void) {
    int numbers[SIZE];
    int count = 0;
    
    printf("Enter 10 integers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if( numbers[i] % 2 == 0) {
            count++;
        }
    }
    printf("Number of even values: %d\n", count);
    return 0;
}