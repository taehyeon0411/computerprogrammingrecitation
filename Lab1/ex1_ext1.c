#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int Max = num1;

    if (Max < num2) {
        Max = num2;
    }
    if (Max < num3) {
        Max = num3;
    }
    printf("The largest number is %d\n", Max);
}