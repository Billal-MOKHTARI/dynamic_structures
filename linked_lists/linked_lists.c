#include "linked_lists.h"
#include <stdlib.h>

LinkedList init_linked_list(int value)
{
    LinkedList list;
    Node *node = alloc_node();

    if(node == NULL)
    {
        printf("Memory allocation failed !\n");
        exit(EXIT_FAILURE);
    }

    node->value = value;
    node->next = NULL;

    list.head = node;
    list.size = 1;

    return list;
}

void show(LinkedList list)
{
    printf("The size of the list is %d\n", list.size);
    printf("-------------------------\n");

    Node *node = list.head;

    printf("The list of elements is\n");
    while(node)
    {
        printf("%d\t", node->value);
        node = node->next;
    }
    printf("\n");
    
}

Node *alloc_node()
{
    Node *node = (Node*)malloc(sizeof(Node));
    return node;
}

void prepend(LinkedList *list, int value)
{
    Node *node = alloc_node();
    node->value = value;

    if(is_empty(*list))
    {
        printf("%d\n", is_empty(*list));
        list->size = 0;
        list->head = node;
    }
    else
    {
        node->next = list->head;
        list->head = node;
    }
    list->size ++;
}

void append(LinkedList *list, int value)
{
    Node *node = alloc_node();
    node->value = value;

    if(is_empty(*list))
    {
        list->size = 0;
        list->head = node;
    }
    else
    {
        Node *tmp = list->head;
        while(tmp->next != NULL) tmp = tmp->next;
        tmp->next = node;
    }
    list->size ++;

}
void add(LinkedList list, int value, int index)
{

}
void update(LinkedList list, int value, int index)
{

}
void update_by_value(LinkedList list, int to_replace, int value)
{

}
void pop(LinkedList list)
{

}
void delete(LinkedList list, int index)
{

}
void delete_by_value(LinkedList list, int value)
{

}
bool is_empty(LinkedList list)
{
    if(list.head == NULL && list.size == 0) return true;
    return false;
}