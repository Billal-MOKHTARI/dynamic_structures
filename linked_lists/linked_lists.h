#ifndef __LINKED_LISTS__H__
#define __LINKED_LISTS__H__
#include <stdbool.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
    int size;
} LinkedList;


Node *alloc_node();
LinkedList init_linked_list(int value);
void show(LinkedList list);
void prepend(LinkedList *list, int value);
void append(LinkedList *list, int value);
void add(LinkedList list, int value, int index);
void update(LinkedList list, int value, int index);
void update_by_value(LinkedList list, int to_replace, int value);
void pop(LinkedList list);
void delete(LinkedList list, int index);
void delete_by_value(LinkedList list, int value);
bool is_empty(LinkedList list);



#endif