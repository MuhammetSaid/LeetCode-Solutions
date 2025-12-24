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
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head, *prev=nullptr, *nxt;
        while(cur != nullptr) {
            nxt = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *iter = new ListNode(), *iter2 = new ListNode(), *ans, *iter_ans;
        iter -> val = 0;
        iter2 -> val = 0;
        iter -> next = reverseList(l1);
        iter2 -> next = reverseList(l2);
        l1 = iter;
        l2 = iter2;
        int elde = 0;
        ans = new ListNode();
        ans -> val = 0;
        iter_ans = ans;

        while (true) {
            if (iter -> next == nullptr && iter2 -> next == nullptr) break;
            int first = iter->next != nullptr ? iter -> next -> val : 0;
            int second = iter2->next != nullptr ? iter2 -> next -> val : 0;
            int toplam = elde + first + second;
            iter_ans -> next = new ListNode();
            iter_ans -> next -> val = toplam%10;
            elde = toplam / 10;

            if (iter -> next != nullptr ) iter = iter -> next;
            if (iter2 -> next != nullptr ) iter2 = iter2 -> next;
            iter_ans = iter_ans -> next;
        }
        if (elde > 0) {
            iter_ans -> next = new ListNode();
            iter_ans -> next -> val = elde;
        }

        
        return reverseList(ans->next) ;
    }
};