#include "header.h"

/* Initializes the list */
void initList(IntList *list) {
    /* TODO: Set list size to 0 */
}

/* Inserts a value at the end of the list */
int insertEnd(IntList *list, int value) {
    /* TODO:
     * 1. Check if list is full
     * 2. Insert value at the end
     * 3. Update size
     */
    return -1;  /* placeholder */
}

/* Inserts a value at a specific index */
int insertAt(IntList *list, int index, int value) {
    /* TODO:
     * 1. Validate index
     * 2. Shift elements to the right
     * 3. Insert value
     * 4. Update size
     */
    return -1;  /* placeholder */
}

/* Removes the element at a specific index */
int removeAt(IntList *list, int index) {
    /* TODO:
     * 1. Validate index
     * 2. Shift elements to the left
     * 3. Update size
     */
    return -1;  /* placeholder */
}

/* Searches for a value and returns its index or -1 */
int search(const IntList *list, int value) {
    /* TODO:
     * Perform a linear search
     */
    return -1;  /* placeholder */
}

/* Prints all elements in the list */
void printList(const IntList *list) {
    /* TODO:
     * Print elements in order
     * Handle empty list
     */
}

/* Prints the menu options */
void printMenu(void) {
    printf("\nMenu:\n");
    printf("1. Insert at end\n");
    printf("2. Insert at index\n");
    printf("3. Remove at index\n");
    printf("4. Search\n");
    printf("5. Print list\n");
    printf("0. Exit\n");
}