class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *iter = head,*temp,*temp2;
        vector<ListNode*> ans;
        int sayac = 0;
        while (iter != nullptr)
        {
            sayac++;
            iter = iter ->next;
        }
        iter = head;
        if (sayac <= k)
        {
            if (iter != nullptr)
            {
                while (iter->next != nullptr)
                {
                    temp = iter->next ;
                    iter ->next = nullptr;
                    ans.push_back(iter);
                    iter = temp;
                }
            }
            if (sayac != 0)
                ans.push_back(iter);
            for (int i = 0 ; i<k-sayac;i++)
                ans.push_back(nullptr);
        }
        else
        {
            iter = head;
            int n = sayac%k,m = (sayac-n)/k,sayac1 ;
            for (int i = 0 ; i<n;i++)
            {
                temp2 = iter;
                for (int j = 0 ; j<m;j++)
                    temp2 = temp2 ->next;
                temp = temp2 ->next;
                temp2 ->next = nullptr;
                ans.push_back(iter);
                iter =temp;
            }
            for (int i = 0 ;i<sayac-n*(m+1);i++)
            {
                temp2 = iter ;
                for (int j = 0;j<m-1;j++)
                    temp2 = temp2->next;
                if (temp2 ->next == nullptr) break;
                temp = temp2 ->next;
                temp2 ->next = nullptr;
                ans.push_back(iter);
                iter =temp;
                temp2 = iter;
            }
            ans.push_back(iter);
        }
        return ans;
    }
};