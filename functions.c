//this file contains definitions for all functions used by main
#include "header.h"

/* Initializes the list */
void initList(IntList *list) {
    list->size = 0; //list size is 0

    //set each index to 0
    for(int i =0; i<MAX_SIZE; i++){
        list->data[i]= 0;
    }
    //printf("Your list is initialized.");
}

/* Inserts a value at the end of the list */
int insertEnd(IntList *list, int value) {

    if (list->size >= MAX_SIZE){ //check if list is max size
        return -1; //failed insertion
    }
     
    else{ //assign end index to value
        list->data[list->size] = value;
        list->size++; //increment size
        return 1; //item successfully entered
    }
}

/* Inserts a value at a specific index */
int insertAt(IntList *list, int index, int value) {
    int i = 0;
    //validate index
     if (list->size >= MAX_SIZE || index<0 || index > list->size){
        return -1; //indicate invalid
     }

    //shift all elements to the right until insertion index reached
    for(i = list->size; i> index; i--){
        list->data[i] = list->data[i-1];
     }

    list->data[index] = value; //insert value
    list->size++; //update size

    return 1; //indicate successful
}

/* Removes the element at a specific index */
int removeAt(IntList *list, int index) {

    if (index < 0 || index >= list->size){ //detect invalid index
        return -1; //indicate failed deletion
    }
    for(int i = index; i< list->size -1 ; i++){ //iterate through list and shift items after deletion to left
        list->data[i] = list->data[i+1];
    }
    list->size--;
    return 1; //indicate successful
}

/* Searches for a value and returns its index or -1 */
int search(const IntList *list, int value) {

    for(int i = 0; i<list->size; i++){ //iterate through list
        if (list->data[i] == value){
            return i; //if target found, return index
        }
    }
    return -1;  //indicate item never found in linear search
}

/* Prints all elements in the list */
void printList(const IntList *list) {
    if (list->size == 0){ //empty case
        printf("List is empty, nothing to print here!");
        return;
    } 
    printf("Here are the contents of your list: \n");
    for(int i =0; i< list->size; i++){ //iterate through the list
        printf("%d, ", list->data[i]); //print all items
    }
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