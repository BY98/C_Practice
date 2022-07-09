#ifndef LIST
#define LIST

// Structs
 typedef struct node {
    int data;
    struct node *link;
}node;

// Linked List functions
struct node * create_node();
struct node * create_linked_list();
struct node * insert_node_beginning(struct node *head);
void count_nodes();

#endif //LIST

