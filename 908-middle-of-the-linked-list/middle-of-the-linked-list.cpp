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
    ListNode* middleNode(ListNode* head) {
        ListNode *iter = head;
        int sayac = 0;
        while (iter != nullptr)
        {
            sayac++;
            iter =iter->next;
        }

        iter =head;
        int deg = sayac/2;
        for (int i = 0 ; i<deg;i++) {
            iter = iter->next;
        }

        return iter;
    }
};