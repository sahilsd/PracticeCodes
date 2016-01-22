struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val=x, next=NULL{}
};
//--recursion--
struct ListNode* reversePair(ListNode *head) 
{
         if(head == NULL)
             return head;
         if(head->next == NULL)
             return head;

         ListNode* next = head->next;
         head->next = swapPairs(next->next);
         next->next = head;

         return next;
}

//---iterative ---
ListNode* swapPairs(ListNode* head) 
{
         ListNode *cur, *n, *la;

         ListNode *newhead = NULL;
        cur = head;
         if(!cur) return head;
         if(!cur->next) return head;

         while(1) {
          n = cur->next;
            if(!n) break;
             if(newhead == NULL)
                 newhead = n;

             la = n->next;
            n->next = cur;
            cur->next = la;

             if(!la) break;
            cur->next = la->next?la->next:la;
            cur = la;
        }
         return newhead;
}
