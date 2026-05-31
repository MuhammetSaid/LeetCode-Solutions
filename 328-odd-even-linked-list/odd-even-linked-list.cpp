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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return head;
        if (!head -> next) return head;
        if (!head -> next -> next) return head;

        ListNode *iter = head, *iter1 = head, *prev = head, *post = head;
        int sayac = 0;
        while (iter) {
            sayac++;
            iter = iter -> next;
        }
        iter = head;
        while (iter1 -> next != nullptr) {
            iter1 = iter1 -> next;
        }    
        sayac /= 2;
        iter = iter -> next;
        post = iter -> next;
        for (int i = 0; i < sayac; i++) {
            if (iter -> next == nullptr) break;
            iter -> next = nullptr;
            prev -> next = post;
            iter1 -> next = iter;
            if (i +1 == sayac) break;
            prev = post;
            post = post -> next -> next;
            iter = prev -> next;
            iter1 = iter1 -> next;
        }

        return head;
    }
};