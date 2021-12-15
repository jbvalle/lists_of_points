#include <stdio.h>
#include <stdlib.h>
#include "../include/node_t.h"

int request_coords(node_t *head){


    //Error Catching
    if(head == NULL){
        printf("\nERROR: Null Pointer Not allowed!");
        return 1;
        exit(1);
    }

    //Initilize Iterator
    node_t *ptr = head;
    int requested_coord;

    printf("\n\nRequest coordinates:\n»");
    scanf("%d",&requested_coord);getchar();
    
    int i;
    for(i = 0; (ptr!= NULL)&&(i < requested_coord);i++){
        ptr = ptr->next;
    }
    printf("\t+------+----+----+\n");
    printf("\t| [%2d] | %2d | %2d |\n", i, ptr->x, ptr->y);
    printf("\t+------+----+----+\n");

    return 0;
}

