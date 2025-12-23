class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *iter1 = l1,*iter2 =l2,*ans= new ListNode() , *ansiter = ans ,*uzun,*kisa;
        int elde = 0 ,sayac1 = 0,sayac2 = 0;
        while (iter1 != nullptr )
        {
            sayac1++;
            iter1= iter1 ->next;
        }
        while (iter2 != nullptr )
        {
            sayac2++;
            iter2= iter2 ->next;
        }
        iter1 = l1;
        iter2 = l2;
        if (sayac1 > sayac2)
        {
            uzun = l1;
            kisa = l2;
        }
        else 
        {
            uzun = l2;
            kisa = l1;
        }
        while (uzun != nullptr)
        {
            
            if (kisa == nullptr)
            {
                ansiter ->next = new ListNode();
                ansiter = ansiter ->next;
                if ((uzun->val + elde)>= 10 )
                {
                    ansiter ->val = (uzun->val +elde)%10;
                    elde = 1;
                }
                else 
                {
                    ansiter ->val = uzun->val + elde;
                    elde = 0 ;
                }
                uzun=uzun->next;
            }


            else {
                if (uzun->val + kisa->val + elde >= 10 )
                {
                    ansiter->next = new ListNode() ;
                    ansiter = ansiter ->next;
                    ansiter ->val = (uzun ->val + kisa ->val +elde )%10;
                    elde = 1;
                    uzun = uzun->next;
                    kisa = kisa->next;
                }
                else if (uzun ->val + kisa->val + elde < 10)
                {
                    ansiter ->next = new ListNode();
                    ansiter = ansiter->next;
                    ansiter ->val = uzun->val + kisa->val +elde;
                    elde = 0 ;
                    uzun = uzun->next;
                    kisa = kisa->next;
                }
            }
            
        }
        if(elde == 1)
        {
            ansiter ->next = new ListNode();
            ansiter = ansiter ->next ; 
            ansiter ->val = 1;
        }
        return ans->next;
    }
};