#include <stdio.h>

int main(void) {
    int total = 0;
    int choice, quantity;

    do {
        printf("1. Americano - 3000 won\n");
        printf("2. Cafe Latte - 4000 won\n");
        printf("3. Cappuccino - 4500 won\n");
        printf("4. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 3000 * quantity;
                break;

            case 2:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 4000 * quantity;
                break;

            case 3:
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                total += 4500 * quantity;
                break;

            case 4:
                break;

            default:
                printf("Invalid choice.\n\n");
                break;
        }

    } while (choice != 4);

    printf("Total: %d won\n", total);

    return 0;
}
