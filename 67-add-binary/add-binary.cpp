class Solution {
public:

    string completeZero(string x, int y) {
        string result = "";
        for (int i = 0; i < y; i++)
            result += '0';
        result += x;
        return result;
    }

    string addBinary(string a, string b) {
        string ans = "";
        int aLength = a.length(), bLength = b.length();
        if (aLength < bLength)
            a = completeZero(a,bLength-aLength);
        else if (bLength < aLength)
            b = completeZero(b,aLength-bLength);
        aLength = a.length(), bLength = b.length();
        int elde = 0 ;
        for (int i = bLength-1; i >= 0; i--) {
            int bi = b[i]-'0', ai = a[i] - '0';
            if (elde + bi + ai == 3 || elde + ai + bi == 1)
                ans+='1';
            else 
                ans += '0';
            if (elde + bi + ai > 1)
                elde = 1;
            else 
                elde = 0;
        }
        if (elde == 1)
            ans += '1';
        reverse(ans.begin() , ans.end());
        return ans;
    }
};