class Solution {
public:
    vector<int> ans;
    void atama(ListNode* iter)
    {
        if (iter == nullptr)
            return ;
        ans.push_back(iter->val);
        atama(iter->next);
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        atama(list1);
        atama(list2);
        sort(ans.begin() , ans.end());
        ListNode* iter1,*iter2;
        iter2 = new ListNode();
        iter2 ->val = ans[0];
        iter1 = iter2;
        for (int i = 1 ; i<ans.size() ; i++)
        {
            iter1->next = new ListNode();
            iter1 = iter1->next;
            iter1->val = ans[i];
        }

        return iter2;
    }
};