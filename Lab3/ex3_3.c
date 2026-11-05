#include <stdio.h>

int main(void) {
    int n, sb, mb, lb, remain, tprice;

    printf("Enter the number of donut: ");
    scanf("%d", &n);

    lb = n / 40;
    remain = n % 40;
    
    mb = remain / 20;
    remain = remain % 20;

    sb = remain / 10;
    remain = remain % 10;

    tprice = lb * 16000 + mb * 8500 + sb * 4500 + remain * 500;

    if(lb > 0) {
        printf("%d large box, ", lb);
    }
    if(mb > 0) {
        printf("%d medium box, ", mb);
    }
    if(sb > 0) {
        printf("%d small box, ", sb);
    }
    printf("%d individual donut\n", remain);

    printf("Total price = %d KRW\n", tprice);

}