#include "header.h"

/* Initializes the list */
void initList(IntList *list) {
    list->size = 0; //Set list size to 0, indicates empty/0

    //explicitly set each index as 0 (otherwise may populate with garbage values)
    for(int i =0; i<MAX_SIZE; i++){
        list->data[i]= 0;
    }

    printf("Your list is initialized.");
}

/* Inserts a value at the end of the list */
int insertEnd(IntList *list, int value) {

    if (list->size >= MAX_SIZE){ //if list is already at max size
        return -1; //return -1, indicates failed insertion
    }
     
    else{ //the size indicates the indice of the last item, assign to value
        list->data[list->size] = value;
        list->size++; //increment size
        return 1; //item successfully entered at end of list
    }
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