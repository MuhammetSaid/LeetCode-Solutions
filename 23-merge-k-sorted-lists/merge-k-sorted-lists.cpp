class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = new ListNode(),*iter = head ;
        iter->val = 99;
        for (int i = 0;i<lists.size();i++)
        {
            iter ->next = lists[i];
            while (iter->next != nullptr )
                iter = iter ->next;
        }
        iter =head ->next;
        int temp;
        ListNode *nxt;
        while (iter != nullptr)
        {
            nxt = iter->next;
            while (nxt != nullptr)
            {
                if (iter ->val >nxt->val)
                {
                    temp = iter ->val;
                    iter ->val = nxt ->val;
                    nxt ->val = temp;
                }
                nxt = nxt ->next;
            }
            iter = iter ->next;
        }
        
        return head->next;
    }
};