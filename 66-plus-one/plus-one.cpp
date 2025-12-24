class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int elde = 0;
        if (digits[digits.size()-1] == 9)
            elde = 1;
        for ( int i = digits.size()-1;i>=0;i--)
        {
            if (digits[i]+elde == 10)
            {
                digits[i] = 0;
                elde = 1;
            }
            else
            {
                digits[i] = digits[i]+1;
                elde = 0;
                break;
            }
        }
        if (elde == 1)
            ans.push_back(1);
        for (int i = 0;i<digits.size();i++)
            ans.push_back(digits[i]);
        return ans;
    }
};