ListNode* reverseList(ListNode *head) {
        ListNode *pre, *it = head, *next;
        pre = NULL;
        while(it) {
            next = it->next;
             it->next = pre;
             pre = it;
            it = next;    
        }
        return it;
}

