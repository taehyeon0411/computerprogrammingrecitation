#include <stdio.h>
#define SIZE 3

float calcuateCharge(int hour);

int main(void) {

    int hour[SIZE];
    int total_H = 0;
    float total_C = 0;

    printf("Enter the hours rented for 3 cars: ");

    for(int i = 0; i <= 2; i++) {
        scanf("%d", &hour[i]);
    }

    printf(" Car \t Hours \t Charge\n");

    for(int i = 0; i <= 2; i++) {
        printf("   %d \t    %d \t    %.2lf", i + 1, hour[i], calculateCharge(hour[i]));
        total_H += hour[i];
        total_C += calculateCharge(hour[i]);
        printf("\n");
    }

    printf("Total \t    %d \t    %.2lf\n", total_H, total_C);

    return 0;
}

float calculateCharge(int hour) {
    float price;

    if(hour <= 8 ) {

        price = 25.00;

    } else if ( hour >= 13) {

        price = ( (hour - 1) / 24 + 1) * 50;

    }
    else {
        price = (hour - 8) * 5 + 25;
    }
    return price + hour * 0.50;
}