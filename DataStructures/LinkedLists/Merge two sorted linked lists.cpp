/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    int temp=0, min=0;
    int max = 2147483647;
    Node * unsort_head,* sort_head, * curr, * curr_sort=NULL, * min_node, *ll_length;
    unsort_head=headA;
    curr=unsort_head;
    if(headA==NULL){
        unsort_head=headB;
    }
    else{
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=headB;
    }
    curr=unsort_head;
    ll_length=unsort_head;
    while(ll_length!=NULL){
        curr=unsort_head;
        min = 0;
        while(curr!=NULL){
            temp = curr->data;
            if(min==0||temp<min) {
                min=temp;
                min_node=curr;
                }
            curr=curr->next;
            }
        Node*new_node = new Node;
        new_node->data=min;
        new_node->next=NULL;
        if (curr_sort == NULL){
            sort_head=new_node;
            curr_sort=new_node;
        }
        else {
            curr_sort->next=new_node;
            curr_sort=curr_sort->next;
        }
        min_node->data = max;
        ll_length=ll_length->next;
    }
    return sort_head; 
}
