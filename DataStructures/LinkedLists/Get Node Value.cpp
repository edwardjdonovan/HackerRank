/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node*a=head,*b=head;
    while(positionFromTail>0){
        b=b->next;
        positionFromTail--;
    }
    while(b->next!=NULL){
        b=b->next;
        a=a->next;
    }
    return a->data;
}
