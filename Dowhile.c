#include <stdio.h>

int main(void) {
    int choice;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Say Hello\n");
        printf("2. Say Bye\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Hello, Trupti!\n");
        } else if (choice == 2) {
            printf("Bye, Trupti!\n");
        }
    } while (choice != 3);

    return 0;
}