Node* MergeLists(Node *headA, Node* headB)
{
 Node* result = NULL;
 
  /* Base cases */
  if (headA == NULL) 
     return headB;
  else if (headB==NULL) 
     return headA;
 
  /* check is a or B is smalller */
  if (headA->data <= headB->data) 
  {
     //Recursivly merge using headA->next if headA is smaller
     result = headA;
     result->next = MergeLists(headA->next, headB);
  }
  else
  {
     //Recursivly merge using headB->next if headBis smaller
     result = headB;
     result->next = MergeLists(headA,headB->next);
  }
  return result;
}