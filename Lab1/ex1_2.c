#include <stdio.h>

int main(void) {

    int number1;
    int number2;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    int quotient = number1 / number2;
    int remainder = number1 % number2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
}