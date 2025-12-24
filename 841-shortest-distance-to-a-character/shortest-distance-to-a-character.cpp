class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        for (int i = 0 ; i < s.length(); i++)
        {
            int m = i-1;
            int n = i;
            for (n = i ; n < s.length() ; n++)
            {
                if (s[n] == c)
                {
                    ans.push_back(n-i);
                    break;
                }
                else if (m>=0)
                {
                    if (s[m] == c)
                    {
                        ans.push_back(i-m);
                        break;
                    }
                    m--;
                    if (m >= 0 && n==s.length()-1)
                        n = i-1;
                }
                
            }
        }
        return ans;
    }
};