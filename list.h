// Structs
 typedef struct node {
    int data;
    struct node *link;
}node;

// Linked List functions
struct node * create_node();
struct node * create_linked_list();
void count_nodes();

