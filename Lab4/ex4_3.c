#include <stdio.h>

int main(void)  {
    int n;
    int i = 2;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("The prime factors of %d :", n);

    while(n > 1) { //첫번째 while문 : temp가 1이 될 경우에 프로그램을 멈추기 위함.
        while(i <= n) { // 두번째 while문 : 소인수분해를 하기 위해서는 2부터 시작해서 계속해서 커져가며 n을 나누어야 함.
            if(n % i == 0) { //n이 i로 나누어떨어질 경우 소인수로 판단하기 위한 if문
                n /= i; //n을 i로 나누면서 다음 소인수를 찾기 위한 준비를 함. 첫번째 while문을 통해서 n = 1이면 프로그램 종료
                printf(" %d", i);
                i = 2; //다시 i가 2가 되도록 설정해서 두번째 while문이 다시 처음부터 실행되면서 소인수를 찾도록 함.
            } else {
                i++; //만약 n이 i로 안나누어떨어질 경우에 i를 증가시키며 소인수를 찾음.
            }
        }
    }
    printf("\n");

    return 0;
}