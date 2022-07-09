#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Creates the head of a linkedlist and returns it
node * create_node()
{
   node * node = (struct node *)malloc(sizeof(struct node));
   return node;
}

// Creates a linkedlist with 3 nodes using 2 pointer variables
struct node * create_linked_list()
{

    // Creates the head with date
    node * head = create_node();
    head->data = 45;
    head->link = NULL;

    // Creates the next node and links this with the initial node
    node * next_node = create_node();
    next_node->data = 5;
    next_node->link = NULL;
    head->link = next_node;

    // Reuse the node to create a third node
    next_node = create_node();
    next_node->data = 6;
    next_node->link = NULL;
    head->link->link = next_node;

    return head;
}


//
// Insert node at the beginning of the list
//

struct node * insert_node_beginning(struct node *head)
{
    struct node * new_head = create_node();
    new_head->data = 55;
    new_head->link = head;
    head = new_head;
    return head;
}


//
// Counts the number of linked_list nodes
//
void count_nodes(struct node * head)
{
int count;
struct node * current = create_node();
current = head;

while (current !=NULL)
{
    count++;
    current = current->link;
}
printf("There are %d nodes in the linkedlist\n",count);}

//
// This function returns the middle node from a linked list sized 1 to 100
//
struct node* middleNode(struct node* head){

    struct node* current = malloc(sizeof(struct node*));
    struct node * array [100];

    current =  head;
    int count = 0;
    while(current !=NULL)
    {
        array[count] = current;
        count = count + 1;
        current = current->link;
    }
    count = count/2;

    return array[count];

}

    }
