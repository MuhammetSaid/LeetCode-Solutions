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
        while(cur != nullptr)
        {
            nxt = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = nxt;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *iter1 = head, *iter2 = head;
        int sayac = 1;
        if (left != 1) {
            while (iter1 != nullptr) {
                if (sayac + 1 == left) break;
                iter1 = iter1 -> next;
                sayac++;
            }
        }
        sayac = 1;
        while (iter2 != nullptr) {
            if (sayac == right) break;
            iter2 = iter2 -> next;
            sayac++;
        }
        ListNode *devam = iter2 -> next;
        iter2 -> next = nullptr;
        if (left != 1) iter1 -> next = reverseList(iter1->next);
        else {
            iter1 = reverseList(iter1);
            head = iter1;
        }
        while (iter1 -> next != nullptr) iter1 = iter1->next;
        iter1 -> next = devam;
        return head;
    }
};