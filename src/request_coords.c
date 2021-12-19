#include <stdio.h>
#include <stdlib.h>
#include "../include/node_t.h"

void color(){

    printf("\033[1;32m");
}

void reset(){

    printf("\033[0m");
}

int request_coords(node_t *head){


    //Error Catching
    if(head == NULL){
        color();
        printf("\nERROR: Null Pointer Not allowed!");reset();
        return 1;
        exit(1);
    }

    //Initilize Iterator
    node_t *ptr = head;
    int requested_coord;
    
    printf("\n\nRequest coordinates:\n");printf("»");
    scanf("%d",&requested_coord);getchar();
    
    int i;
    for(i = 0; (ptr!= NULL)&&(i < requested_coord);i++){
        ptr = ptr->next;
    }
    color();
    printf("\t+------+----+----+\n");
    printf("\t| [%2d] | %2d | %2d |\n", i, ptr->x, ptr->y);
    printf("\t+------+----+----+\n");reset();

    return 0;
}

