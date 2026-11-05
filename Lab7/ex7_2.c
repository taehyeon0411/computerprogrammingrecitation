#include <stdio.h>

int euclid_gcd(int M, int N);

int main(void) {
    int M, N;
    printf("Enter two integers: ");
    scanf("%d %d", &M, &N);
    printf("Greatest common divisor: %d\n", euclid_gcd(M, N));
}

int euclid_gcd(int M, int N) {
    int temp;
    int R = 0;

    if(M < N) {
        temp = M;
        M = N;
        N = temp;
    }
    while( N != 0) {
        R = M % N;
        M = N;
        N = R;
    }
    return M;
}