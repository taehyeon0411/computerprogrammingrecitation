#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII code: %d\n", ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if(ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if(ch >= '0' && ch <= '9') {
        printf("Digit\n");   
    } else {
        printf("Special character\n");
    }
    return 0;
}