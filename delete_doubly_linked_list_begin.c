struct node {
    int data;
    struct node *next;
    struct node *prev;
}
if (*head == del_node)
    *head = del_node->next;

if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;

free(del);