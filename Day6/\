class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return false;
        
        ListNode *ptr1 = head, *ptr2 = head;
        
        while (ptr1 != NULL && ptr1->next != NULL)
        {
            ptr1 = ptr1->next->next;
            ptr2 = ptr2->next;
            
            if (ptr1 == ptr2)
                return true;
        }
        
        return false;
    }
};


// Time compexity O(n)
