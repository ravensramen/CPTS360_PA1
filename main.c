//Sydnee Boothby
//CPTS 360 PA1
//C Review, basic LinkedList program

//this file contains main program, function definitions in functions.c and declarations/preprocessor
//directives in header.h

#include "header.h"

int main(void) {

    printf("Testing modularization of files");

    IntList list;
    int choice;
    int value;
    int index;
    int result;

    initList(&list);

    do {
        printMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                result = insertEnd(&list, value);
                if (result == -1) {
                    printf("List is full.\n");
                }
                break;

            case 2:
                printf("Enter index: ");
                scanf("%d", &index);
                printf("Enter value: ");
                scanf("%d", &value);
                result = insertAt(&list, index, value);
                if (result == -1) {
                    printf("Invalid index or list is full.\n");
                }
                break;

            case 3:
                printf("Enter index to remove: ");
                scanf("%d", &index);
                result = removeAt(&list, index);
                if (result == -1) {
                    printf("Invalid index.\n");
                }
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                result = search(&list, value);
                if (result == -1) {
                    printf("Value not found.\n");
                } else {
                    printf("Value found at index %d.\n", result);
                }
                break;

            case 5:
                printList(&list);
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}

