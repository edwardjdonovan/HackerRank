/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node * tail = new Node;
    tail->data = data;
    tail->next=NULL;
    Node * temp = head; 
    if(head==NULL){
        head = tail;
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=tail;
    }
    return head;
}