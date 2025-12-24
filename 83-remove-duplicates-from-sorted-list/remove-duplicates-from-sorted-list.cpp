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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *head2 = new ListNode(),*iter = head2,*iter2 = head,*iter3 = head2;
        int b = 0;
        if (iter2 == nullptr)
        {
            return head;
        }
        iter->val = iter2->val;
        iter2= iter2->next;
        while (iter2 != nullptr)
        {
            while (iter != nullptr)
            {
                if (iter2->val == iter->val)
                {
                    b=1;
                }

                iter=iter->next;
            }
            iter = head2;
           
            if(b == 0)
            {
                iter3->next = new ListNode();
                iter3->next->val=iter2->val;
                iter3 = iter3->next;
            }
            iter2= iter2->next;
            b=0;
            
        }
        

        return head2;
    }
};