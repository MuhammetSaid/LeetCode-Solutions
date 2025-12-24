class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *iter = head,*once;
        once = nullptr;
        int sayac = 0;
        while (iter != nullptr)
        {
            sayac++;
            iter = iter->next;
        }
        iter = head;
        if (n > sayac) 
            return head;
        for (int i = 0;i <sayac-n;i++)
        {
            once = iter;
            iter = iter->next;
        }
        if (once == nullptr) 
            head = head->next;
        else
            once->next = iter->next;            
        delete iter;
        return head;
    }
};