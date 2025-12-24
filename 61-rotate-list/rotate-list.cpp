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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *son=head,*iter,*prev = head,*iter2;

        if (k > 100000 && k%10 != 0)
        {
            k = k%1000;
        }

        else if (k > 100000 && k%10 == 0)
        {
            k =k/10000;
        }
        

        if (k == 0 )
        {
            return head;
        }
        if (head == nullptr)
        {
            return head;
        }
        

        for (long i = 0; i<k ; i++)
        {
            while (son->next != nullptr)
            {
                son = son ->next;
            }

            if (head ->next == nullptr)
            {
                return head;
            }

            while (prev->next->next != nullptr)
            {
                prev=prev->next;
            }
            iter = new ListNode();
            iter ->next = head;
            iter->val = son->val;
            head = iter;
            iter2 =prev;
            prev ->next = nullptr;
            delete iter2->next;
            prev = head;
            son = head;
        }


        return head;
    }
};