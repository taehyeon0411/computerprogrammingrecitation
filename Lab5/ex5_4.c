#include <stdio.h>

int difference(int a, int b) {
    int diff = a - b;

    if(diff >= 0) {
        return diff;
    } else {
        return (-diff);
    }
}
int main(void) {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("Absolute difference: %d\n", difference(num1, num2));
}