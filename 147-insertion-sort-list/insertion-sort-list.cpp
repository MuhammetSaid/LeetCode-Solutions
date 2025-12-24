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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *iter = head , *iter2 = nullptr;
        int deger; 
        if ( iter == nullptr || iter ->next == nullptr)
            return iter;
        
        

        while (iter->next != nullptr)
        {
            iter2 = iter->next;
            while(iter2 != nullptr)
            {
                if (iter->val > iter2 ->val)
                {
                    deger = iter->val;
                    iter ->val = iter2->val ;
                    iter2->val = deger;
                }
                iter2 = iter2->next;
            }
            iter = iter->next;
        }

        
        return head;
    }
};