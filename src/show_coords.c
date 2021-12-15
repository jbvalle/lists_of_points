#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "../include/node_t.h"

int show_coords(node_t *head){

    //Error Catching
    if(head == NULL){
        printf("\nERROR: Null Pointer Not allowed!");
        return 1;
        exit(1);
    }
    //Initialize iterator
    node_t *ptr = head;

    for(int i = 0; ptr != NULL; i++){
        printf("\t+------+----+----+\n");
        printf("\t| [%2d] | %2d | %2d |\n", i, ptr->x, ptr->y);
        printf("\t+------+----+----+\n");
        ptr = ptr->next;
    }
    return 0;
}
