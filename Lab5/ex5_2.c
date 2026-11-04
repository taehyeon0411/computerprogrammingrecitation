#include <stdio.h>

int isLeapYear(int year) {
    if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
int main(void) {
    int num1, num2, total = 0;

    printf("Enter start and end: ");
    scanf("%d %d", &num1, &num2);

    for(int i = num1; i <= num2; i++) {
        if(isLeapYear(i)) {
            total++;
        }
    }
    
    printf("Number of leap years: %d\n", total);
    return 0;
}