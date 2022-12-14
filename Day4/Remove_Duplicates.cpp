/*
 Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int0 x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* tmp = head;
        while (tmp && tmp->next)
        {
            if (tmp->val == tmp->next->val)
                tmp->next = tmp->next->next;
            else
                tmp = tmp->next;
        }
        return head;
    }
};

// Time complexity O(n)
