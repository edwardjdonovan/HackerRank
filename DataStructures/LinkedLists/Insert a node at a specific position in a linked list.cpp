/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
   Node *n_ptr;
   Node *new_node = new Node;  
   new_node->data = data;  
   new_node->next = NULL;  
   if(head == NULL){  
     head = new_node;  
   }else{  
     int i=0;  
     n_ptr = head;  
     while(n_ptr!=NULL){  
       if(position == 0){  
           new_node->next = n_ptr;  
           head= new_node;  
       }  
       else if(i==position-1){  
         new_node->next = n_ptr->next;  
         n_ptr ->next = new_node;  
       }else{  
       }i++;  
       n_ptr= n_ptr->next;  
     }  
   }  
   return head;
}