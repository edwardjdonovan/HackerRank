/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    if(head==NULL) return head;
    Node *temp = head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
            continue;
        }
        temp=temp->next;
    }
    return head;
}
