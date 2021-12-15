#include <stdio.h>
#include <stdlib.h>
#include "../include/node_t.h"

int free_coords(node_t *head){

    //Error Catching
    if(head == NULL){
        printf("\nERROR: Null Pointer Not allowed!");
        return 1;
        exit(1);
    }

    //init iterator 
    node_t *ptr = head;

    while(ptr != NULL){

        node_t *temp = ptr->next;
        free(ptr);
        ptr = temp;
    }


    return 0;
}
