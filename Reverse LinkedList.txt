/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
   Node *prev = NULL; //Used to keep track of previous value 
   Node *cur = head;  //Current pointer
   Node *next ;  //Next pointer
   while(cur!=NULL){  
     next = cur->next;  //Sets next to the next value
     cur->next = prev;  //Sets the next value to the previous value
     prev = cur;  //Sets preious to current
     cur = next;  //Moves current to the next value
   }  
   head = prev;  //Sets head to the original last element
   return head;  //Returns reversed list
 }  

