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

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head;
        ListNode *iter = head, *post = head, *prev = head, *iter1 = head;
        for (int i = 0; i < k - 1; i++) {
            if (prev -> next == nullptr) return head;
            prev = prev -> next;
        }
        post = prev -> next;
        prev -> next = nullptr;
        prev = iter;
        iter = reverseList(iter);
        prev -> next = post;
        head = iter;
        iter = post;
        prev = iter;
        iter1 = head;
        if (prev == nullptr) return head;
        while (true) {
            for (int i = 0; i < k - 1; i++ ) {
                if (prev -> next == nullptr) return head;
                prev = prev -> next;
            }
            post = prev -> next;
            prev -> next = nullptr;
            prev = iter;
            iter = reverseList(iter);
            prev -> next = post;
            for (int i = 0; i < k - 1; i++) {
                iter1 = iter1 -> next;
            }
            iter1 -> next = iter;
            
            iter = post;
            prev = iter;
            iter1 = iter1 -> next;
            if (post == nullptr) return head;
        }
        return head;
    }
};