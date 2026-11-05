#include <stdio.h>

int main() {
    int year1, year2, total = 0;

    printf("Enter start year: ");
    scanf("%d", &year1);
    printf("Enter second year: ");
    scanf("%d", &year2);

    printf("Leap years: ");
    for(int i = year1; i<=year2; i++ ){
        if(i % 4 == 0 && i % 100 != 0) {
            printf("%d ", i);
            total += 1;
        }
    }
    printf("\n");
    printf("Output: %d\n", total);


}