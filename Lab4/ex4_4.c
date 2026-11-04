#include <stdio.h>

int first() {
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
int second() {
    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
int third() {
    for(int i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
int fourth() {
    for(int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

int main() {
    int choice;

    do {
        printf("\n1. Print numbers from 1 to 10\n");
        printf("2. Print even numbers from 1 to 20\n");
        printf("3. Print odd numbers from 1 to 20\n");
        printf("4. Print numbers from 10 to 1\n");
        printf("0. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 0:
                break;
            case 1:
                first();
                break;
            case 2:
                second();
                break;
            case 3:
                third();
                break;
            case 4:
                fourth();
                break;
            default: 
                printf("Invalid choice.\n");
        }

    } while(choice != 0);

    printf("Program terminated\n");
}


