#include <stdio.h>
#define SIZE 5

int main(void) {
    int num[SIZE];
    int num_cons = 1;
    
    printf("Enter 5 integers: ");
    for(int i = 0; i <= 4; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i <= 3; i++ ) {
        if(num[i+1] - num[i] !=1 ) {
            num_cons = 0;
        }
    }
    if(num_cons) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}