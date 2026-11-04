#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, sum = 0;
    
    printf("Random numbers:");
    for (int i = 0; i < 10; i++) {
        num = rand() % 100 + 1;
        printf(" %d", num);
        sum += num;
    }

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", sum / 10.0);

    return 0;
}