class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head, *prev=nullptr, *nxt;
        while(cur != nullptr)
        {
            nxt = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
    }
};