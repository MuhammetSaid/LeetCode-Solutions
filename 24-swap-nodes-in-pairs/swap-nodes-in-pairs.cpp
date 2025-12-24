class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *iter = head;
        int sayac = 0;
        if (iter == nullptr || iter ->next == nullptr ) return iter ;
        ListNode *iter2 ,*head2 = iter ->next;
        while (iter ->next != nullptr)
        {
            if (sayac == 0)
            {
                iter2 = iter ->next;
                if (iter2->next != nullptr)
                    iter ->next = iter2->next ;
                else 
                    iter->next = nullptr;
                iter2 ->next = iter;
            }
            else
            {
                iter2 = iter ->next;
                if (iter2->next != nullptr)
                    iter ->next = iter2->next;
                else 
                    break;
                if (iter2 ->next->next != nullptr)
                    iter2->next = iter2->next->next;
                else
                    iter2 ->next = nullptr;
                iter->next ->next = iter2;
                iter = iter2;
            }
            sayac++;
        }
        return head2;
    }
};