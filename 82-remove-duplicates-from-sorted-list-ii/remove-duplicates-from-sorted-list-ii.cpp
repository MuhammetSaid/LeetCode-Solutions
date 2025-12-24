class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *iter = head,*iter2 = head;
        vector<int> abs;
        int sayac1= 0 ,sayac2 = 0,kontrol = 0;
        while (iter != nullptr)
        {
            sayac1++;
            while (iter2 != nullptr)
            {
                sayac2++;
                if (iter->val == iter2->val && sayac1 != sayac2)
                {
                    kontrol =1 ; 
                    break;
                }
                iter2 = iter2 ->next;
            }
            if (kontrol == 0)
                abs.push_back(iter->val);
            kontrol = 0;
            sayac2 = 0;
            iter2 = head;
            iter = iter ->next;
        }
        if(abs.size() == 0 ) return nullptr;
        ListNode *temp,*root;
        root = new ListNode();
        root ->val = abs[0];
        temp = root;
        for (int i= 1 ; i<abs.size();i++)
        {
            temp ->next = new ListNode();
            temp = temp ->next;
            temp ->val = abs[i];
        }
        return root;
    }
};