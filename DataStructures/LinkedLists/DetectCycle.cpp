/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
    if(head==NULL||head->next==NULL) return 0;
    Node* tortoise = head;
    Node* hare = head->next;
    while(hare->next!=NULL){
        if(hare==tortoise) return 1;
        tortoise = tortoise->next;
        hare=hare->next->next;
    }
    return 0;
}
