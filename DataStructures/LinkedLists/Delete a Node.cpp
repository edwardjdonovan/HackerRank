/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node * n_ptr1;
    n_ptr1 = head;
    if(position==0){
        head=n_ptr1->next;
        return head;
    }
    for(int i; i < position-1; i++){
        n_ptr1=n_ptr1->next;   
    }
    Node*n_ptr2=n_ptr1->next;
    n_ptr1->next=n_ptr2->next;
    delete(n_ptr2);
    return head;
}
