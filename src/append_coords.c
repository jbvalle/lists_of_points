#include <stdlib.h>
#include "../include/node_t.h"

void append_coords(node_t **head, int x, int y){

    //Assign pointer to head 
    node_t *ptr = *head;

    //Generate new Node with assigned new values
    node_t *new_coords = (node_t *)malloc(sizeof(node_t));
    new_coords->x = x;
    new_coords->y = y;

    //Check for the first element if NULL Pointer
    if(ptr == NULL){

        *head = new_coords;
        return;
    }

    //Iterate through list until Null pointer found
    for(;ptr->next != NULL; ptr = ptr->next);

    //Append new element to the last element of the list
    ptr->next = new_coords;

    return;
}
