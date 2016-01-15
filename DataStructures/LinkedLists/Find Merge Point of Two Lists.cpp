/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    int mergePointData;
    Node* tempA = headA;
    Node* tempB = headB;
    while(tempA!=NULL){
        while(tempB!=NULL){
            if(tempB==tempA) return tempA->data;
            tempB=tempB->next;
        }
        tempA=tempA->next;
        tempB=headB;
    }
    return 0;
}
