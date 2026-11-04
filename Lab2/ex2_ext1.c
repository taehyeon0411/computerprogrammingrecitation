#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int Max, Min;

    Max = num1;
    Min = num1;

    if(Max < num2) {
        Max = num2;
    }
    if(Max < num3) {
        Max = num3;
    }
    if(Max < num4) {
        Max = num4;
    }

    if(Min > num2) {
        Min = num2;
    }
    if(Min > num3) {
        Min = num3;
    }
    if(Min > num4) {
        Min = num4;
    }
    
    printf("Max: %d\n", Max);
    printf("Min: %d\n", Min);
}