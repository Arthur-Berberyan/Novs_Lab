//Given the heads of two singly linked - lists headA and headB, return the node at which the two lists intersect.If the two linked lists have no intersection at all, return null.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        ListNode* currA = headA;
        ListNode* currB = headB;
        int countA = 0, countB = 0;

        while (currA) {
            currA = currA->next, countA++;
        }
        while (currB) {
            currB = currB->next, countB++;
        }
        int diff = std::abs(countA - countB);
        if (countB > countA) { swap(headA, headB); }
        while (diff--) {
            headA = headA->next;
        }
        while (headA != headB) {
            headA = headA->next, headB = headB->next;
        }
        return headA;
    }
};


// Time complexity O(n) 