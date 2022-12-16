/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL) return NULL;

ListNode* current = head;
ListNode* NNext = head->next;


while(NNext) {
	if(NNext->val < current->val)
     {
		ListNode *proc = NNext->next;
		current->next = proc;
		if(NNext->val <= head->val) 
        {
			NNext->next = head;
			head = NNext;
			NNext = current->next;
		} else 
        {
			ListNode *tmp = head;
			while(tmp) 
            {
				if(NNext->val > tmp->val && NNext->val <= tmp->next->val) 
                {
					ListNode *tmpNext = tmp->next;
					tmp->next = NNext;
					NNext->next = tmpNext;
					break;
				} else 
                {
					tmp = tmp->next;
				}
			}
			NNext = current->next;
		}
	} else {
		current = NNext;
		NNext = NNext->next;
	}
}
    return head;
    }

};
