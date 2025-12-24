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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head) return head;
        ListNode *iter = head,*sag=new ListNode(),*sol = new ListNode(),*sagiter = sag,*soliter = sol;
        while (iter != nullptr)
        {
            if (iter->val <x)
            {
                soliter->next = new ListNode();
                soliter = soliter->next;
                soliter ->val = iter->val;
            }
            else {
                sagiter->next = new ListNode();
                sagiter = sagiter->next;
                sagiter ->val = iter->val;
            }
            iter = iter ->next;
        }
        sagiter = sag->next;
        while (sagiter != nullptr)
        {
            soliter->next= new ListNode();
            soliter = soliter ->next;
            soliter ->val = sagiter->val;
            sagiter = sagiter->next;
        }


        return sol->next;
    }
};