class Solution {
public:
    bool isPalindrome(int x) {
        string duz ,ters;
        duz = to_string(x);

        for(int i = duz.length()-1;i>=0;i--)
        {
            ters.push_back(duz[i]);
        }
        return ters == duz;
    }
};