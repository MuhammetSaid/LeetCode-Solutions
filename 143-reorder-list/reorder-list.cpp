class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* iter1 = head , *iter2 , *temp1 , *temp2;
        if (head == nullptr) return ;
        if (head->next == nullptr) return ;
        if (head->next->next == nullptr) return ;
        while (iter1->next ->next != nullptr) 
        {
            iter2 = iter1 -> next;
            temp2 = iter1;
            while (temp2 -> next ->next!= nullptr)
                temp2 = temp2 -> next;
            temp1 = temp2 ->next;
            temp2->next = nullptr;
            temp1 ->next = iter2;
            iter1->next = temp1;
            iter1 = iter1 ->next->next;
            if (iter1 ->next == nullptr) break;
        }
    }
};