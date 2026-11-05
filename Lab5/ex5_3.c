#include <stdio.h>

int isPrime(int n) {
    int isPrimeTest = 1;
    for(int i = 2; i < n; i++) {
        if(n % i == 0){
            isPrimeTest = 0;
        }
    }
    return isPrimeTest;
}

int main(void) {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("\n");
    if(num >= 2 && num <= 1000) {
        if(isPrime(num)) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    } else {
        printf("Invalid integer.\n");
    }
}