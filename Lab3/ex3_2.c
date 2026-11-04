#include <stdio.h>

int main(void) {
    int i, n;
    unsigned int anw = 1;

    printf("Enter n: ");
    scanf("%d", &n);


    if(n == 0) {
        printf("Factorial: 1\n");
    } else {

        for(i = n; i >= 1; i--) {
            anw = anw * i;
        }
        printf("Factorial: %d\n", anw);
    }

    

}