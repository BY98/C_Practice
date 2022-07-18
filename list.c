#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Creates a linkedlist node and returns it
node * create_node()
{
   node * node = (struct node *)malloc(sizeof(struct node));
   node->link = NULL;
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
// Delete node at beginning of linked_list
//
struct node * delete_node_beginning(struct node *new_head)
{
    if (new_head != NULL)
    {
         node *temp_node = new_head;
         if (temp_node != NULL)
         {
         new_head = new_head->link;
         free(temp_node);
         temp_node = NULL;
         }
    }

    return new_head;

}

//
// Deletes the last node in the list
//
void delete_last_node(struct node * head)
{
  if (head->link == NULL)
  {
      free(head);
      head = NULL;
  }
  else if (head != NULL)
  {
      struct node * ptr = head;

      while (ptr->link->link!= NULL)
      {
          ptr = ptr->link;
      }

      free(ptr->link);
      ptr->link = NULL;
  }
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
// Insert node at any position;
//
struct node * insert_node(struct node *head, int data, int position)
{
    struct node *new_node = create_node();
    struct node *ptr = head;


    position--;

    while (position !=1)
    {
        ptr = ptr->link;
        position--;
    }

    new_node->link = ptr->link;
    new_node->data = data;

    ptr->link = new_node;

    return new_node;
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
    printf("There are %d nodes in the linkedlist\n",count);
}

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


