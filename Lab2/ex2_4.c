#include <stdio.h>

int main(void) {
    int num;
    int init = 1;
    int answer = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(init <= num ) {
        answer = answer * init;
        init = init + 1;
    }
    printf("%d\n", answer);
}