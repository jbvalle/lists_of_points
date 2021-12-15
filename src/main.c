#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/node_t.h"
#include "../include/append_coords.h"
#include "../include/show_coords.h"
#include "../include/request_coords.h"
#include "../include/free_coords.h"

int main(void){
    //Initialize first element of List
    node_t *head = NULL;
    
    //Plant rand seed
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        //Generate X|Y Coordinates 
        int x = rand()%20 + 1;
        int y = rand()%20 + 1;
        //Append to existing list
        append_coords(&head,x,y);
    }

    //Display all coordinates of linked list
    show_coords(head);

    //Request Input from STDIN and display n.th element coordinates
    request_coords(head);

    //free lists by iterating through list
    free_coords(head); 

    
    return 0;
}
