class Solution {
public:
    int countAsterisks(string s) {
        string ans;
        int sayac=0;
        for (int i = 0 ; i<s.length();i++)
        {
            if (s[i] == '|')
            {
                i++;
                while (s[i] != '|')
                {
                    i++;
                }
            }
            else {
                ans.push_back(s[i]);                
            }
        }
        for(int i = 0 ; i<ans.length();i++)
        {
            if (ans[i] == '*')
                sayac++;
        }
        return sayac;
    }
};