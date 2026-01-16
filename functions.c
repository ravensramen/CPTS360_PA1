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
    int i = 0;
    //validate index
     if (list->size >= MAX_SIZE || index<0 || index > list->size){
        return -1; //indicate invalid index
     }

    //shift all elements to the right until insertion index reached
    for(i = list->size; i> index; i--){
        list->data[i] = list->data[i-1];
     }

    list->data[index] = value; //insert value
    list->size++; //update size

    return 1; //indicate successful insertion
}

/* Removes the element at a specific index */
int removeAt(IntList *list, int index) {

    if (index>list->size || list->data[index] == 0){ //detect invalid index or already empty index
        return -1; //indicate failed deletion
    }
    for(int i = index; i< list->size; i++){ //iterate through list and shift items after deletion to left
        list->data[i] = list->data[i+1];
    }
    list->size--;
    return 1; //indicate successful deletion
}

/* Searches for a value and returns its index or -1 */
int search(const IntList *list, int value) {

    for(int i = 0; i<list->size; i++){ //iterate through entire list
        if (list->data[i] == value){
            return i; //if target value found, return it's index
        }
    }
    return -1;  //indicate item was never found in linear search
}

/* Prints all elements in the list */
void printList(const IntList *list) {
    if (list->size == 0){ //empty case
        printf("List is empty, nothing to print here!");
        return; //early return
    } 
    printf("Here are the contents of your list: \n");
    for(int i =0; i< list->size; i++){ //iterate through the entire list
        printf("%d, ", list->data[i]); 
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