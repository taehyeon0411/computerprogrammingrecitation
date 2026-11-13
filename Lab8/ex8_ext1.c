#include <stdio.h>

int main(void) {
    char word[30];

    printf("Enter a word: ");
    scanf("%29s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        printf("%c\n", word[i]);
    }

    return 0;
}
