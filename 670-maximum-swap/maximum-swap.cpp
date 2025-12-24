class Solution {
public:
    int maximumSwap(int num) {
        vector <int> basamak;
        while (num > 0 ) {
            basamak.push_back(num%10);
            num /= 10 ; 
        }
        int max = 0 ,maxin;
        for (int i = basamak.size()-1 ; i >= 0 ; i--)
        {
            for (int j = i-1 ; j >= 0 ; j--) 
            {
                if (max <= basamak[j])
                {
                    max = basamak[j];
                    maxin = j;
                }
            }
            if (max > basamak[i]) 
            {
                basamak[maxin] = basamak[i];
                basamak[i] = max;
                break;
            }
            max = 0;
        }
        int ans = 0;
        for (int i = basamak.size()-1  ; i>= 0 ; i--) 
        {
            ans= ans*10 + basamak[i];
        }
        return ans ; 
    }
};