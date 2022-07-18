#include <stdio.h>
#include <stdlib.h>
#include "list.h"




int main()
{
    node * head = create_linked_list();
    count_nodes(head);
    head = delete_node_beginning(head);
    count_nodes(head);
    delete_last_node(head);
    count_nodes(head);
    head = reverse_list(head);

    return 0;
}







