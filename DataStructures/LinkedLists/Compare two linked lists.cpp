/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    if (headA==NULL && headB==NULL)return 1;
    else if(headA==NULL||headB==NULL)return 0;
    if(headA->next==NULL&&headB->next==NULL){
        return (headA->data==headB->data)?1:0;
    }
    else if (headA->next==NULL||headB->next==NULL){
        return 0;
    }
    return CompareLists(headA->next,headB->next);
}