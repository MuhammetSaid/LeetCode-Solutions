class Solution {
public:
    vector<int> countBits(int n) {
        int sayac = 0 ,m;
        string a;
        vector<int> ans;
        
        for (int i = 0 ; i<=n;i++)
        {
            m = i;
            while(i>=0)
            {
                if (m == 0 || m == 1)
                {
                    a+=to_string(m);
                    
                    break;
                }
                a+= to_string(m%2);
                m /= 2;
            }
            for (int j = 0 ; j<a.length() ; j++)
            {
                if (a[j] == '1')
                    sayac++;
            }
            ans.push_back(sayac);
            sayac = 0 ;
            a= "";
        }
        return ans;
    }
};