#include <stdio.h>

int main(void) {
    int seconds;
    
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    int hours = (seconds / 3600);
    int minutes = (seconds - hours * 3600) / 60;
    seconds = (seconds - hours * 3600 - minutes * 60);

    printf("%d hours %d minutes %d seconds\n", hours, minutes, seconds);

    return 0;

}