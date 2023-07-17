struct node {
    int data;
    struct node *next;
    struct node *prev;
}
if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;