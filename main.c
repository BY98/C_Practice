#include <stdio.h>
#include <stdlib.h>
#include "employee.h"
#include "list.h"

int main()
{
    // Creates the head with date
    node * new_head = create_node();
    new_head->data = 45;
    new_head->link = NULL;

    // Creates the next node and links this with the initial node
    node * next_node = create_node();
    next_node->data = 5;
    next_node->link = NULL;
    new_head->link = next_node;

    // Reuse the node to create a third node
    next_node = create_node();
    next_node->data = 6;
    next_node->link = NULL;
    new_head->link->link = next_node;

    return 0;
}




