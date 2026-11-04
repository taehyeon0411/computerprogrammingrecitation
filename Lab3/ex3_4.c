#include <stdio.h>

int main(void) {
    int H, W, N;
    int room_W = 1;
    int room_H;

    printf("Enter H, W and N : ");
    scanf("%d %d %d", &H, &W, &N);
    printf("N : %d ---------> ", N);
    
    while( N > H) {
        N -= H;
        room_W++;
    }
    room_H = N;
    
    if(room_W < 10) {
        printf("Student's room number : %d0%d\n", room_H, room_W);
    } else {
        printf("Student's room number : %d%d\n", room_H, room_W);
    }

}