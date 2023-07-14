struct node {
  int data;
  struct node *next;
};

struct node* temp = head;
while(temp->next->next!=NULL){
  temp = temp->next;
}
temp->next = NULL;