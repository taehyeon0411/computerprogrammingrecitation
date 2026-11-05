#include <stdio.h>

int main(void) {
    double height_cm, height_m;
    double weight;

    double BMI;

    printf("Enter height (cm) and weight (kg): ");
    scanf("%lf %lf", &height_cm, &weight);
    height_m = height_cm / 100.0;
    BMI = weight / (height_m * height_m);
    printf("BMI: %.2f\n", BMI);

    if (BMI < 18.5) {
        printf("Status: Underweight\n");
    } else if(BMI < 23.0) {
        printf("Status: Normal weight\n");
    } else if(BMI < 25.0) {
        printf("Status: Overweight\n");
    } else {
        printf("Stutus: Obese\n");
    }
}