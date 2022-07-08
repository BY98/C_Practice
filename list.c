#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Creates the head of a linkedlist and returns it
node * create_node()
{
   node * node = (struct node *)malloc(sizeof(struct node));
   return node;
}
