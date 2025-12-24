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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *iter = headA,*iter2 = headB;
        int b = 0;
        if (iter == nullptr || iter2 == nullptr)
            return iter;
        while (iter != iter2)
        {
            if ( iter == nullptr)
                iter = headB;
            else 
                iter = iter ->next;
            if (iter2 == nullptr)
                iter2 = headA;
            else
                iter2 = iter2 ->next;
        }
        
        return iter;
    }
};