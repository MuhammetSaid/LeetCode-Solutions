class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *iter = head;
        int kontrol = 0;
        if (iter == nullptr ) return head;
        while (iter ->val == val && iter->next != nullptr)
            iter = iter->next;
        head = iter;
        if (iter ->next == nullptr && iter ->val == val ) return nullptr;
        if (iter ->next == nullptr) return head;
        while (iter ->next->next != nullptr)
        {
            if (iter->next ->val == val)
            {
                iter ->next = iter->next ->next;
                kontrol = 1;
            }
            if (kontrol == 1)
            {
                kontrol = 0;
                continue;
            }
            iter = iter ->next;
            if(iter ->next == nullptr) break;
            
        }
        iter = head ;
        while (iter->next ->next != nullptr)
            iter = iter ->next;
        if (iter->next ->val == val)
            iter ->next = nullptr;
        return head ;
    }
};