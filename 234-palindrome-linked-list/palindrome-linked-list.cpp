class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *iter2 = new ListNode(),*iter3 = iter2,*iter = head;
        while (iter != nullptr)
        {
            iter3->next = new ListNode();
            iter3->next ->val = iter->val;
            iter3 = iter3->next;
            iter = iter -> next;
        }
        iter = head;
        ListNode *cur=iter, *prev=nullptr, *nxt;
        while(cur != nullptr)
        {
            nxt = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = nxt;
        }
        iter3 = iter2->next;
        ListNode *prev2 = prev;
        while (iter3 != nullptr && prev != nullptr)
        {
            if (iter3->val != prev2->val) return false;
            iter3 =iter3->next;
            prev2 =prev2 ->next;
        }
        return true;
    }
};