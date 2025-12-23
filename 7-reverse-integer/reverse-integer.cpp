class Solution {
public:
    int reverse(int x) {
        vector<int> basamak;
        bool neg = false;
        if (x <= INT_MIN ) return 0;
        if (x < 0) {
            neg = true;
            x = -x;
        }
        while (x > 0) {
            basamak.push_back(x%10);
            x /= 10;
        }
        int ans = 0;
        for (int i = 0 ; i<basamak.size() ; i++) 
        {
            if (ans > INT_MAX / 10) return 0;
            ans = ans *10 + basamak[i];
        }
        return neg ? -ans : ans;
    }
};