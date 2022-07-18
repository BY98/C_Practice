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
struct node * delete_node_beginning(struct node *new_head);
void delete_last_node(struct node * new_head);
void delete_node_pos(struct node *new_head);
struct node * insert_node(struct node *head, int data, int position);
struct node * insert_node_beginning(struct node *head);
struct node * reverse_list(struct node * head)
struct node* middleNode(struct node* head);
void count_nodes();

#endif //LIST

