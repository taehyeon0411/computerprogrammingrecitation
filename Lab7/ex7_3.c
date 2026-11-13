#include <stdio.h>

int gcd_r(int M, int N);

int main(void)
{
    int a, b;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("gcd = %d\n", gcd_r(a, b));

    return 0;
}

int gcd_r(int M, int N)
{
    if (M < N) {
        int temp = M;
        M = N;
        N = temp;
    }

    if (N == 0) {
        return M;
    }

    return gcd_r(N, M % N);
}
