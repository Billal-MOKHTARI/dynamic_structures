#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"


void main(int argc, char *argv[])
{
    // Initialize a LinkedList
    printf("Initialize the linked list\n");
    LinkedList list = init_linked_list(5);
    show(list);
    printf("\n");

    // Prepend elements
    printf("Prepend an element\n");
    prepend(&list, 3);
    show(list);
    printf("\n");

    // Append an element
    printf("Append an element\n");
    append(&list, 10);
    show(list);
    printf("\n");
}

