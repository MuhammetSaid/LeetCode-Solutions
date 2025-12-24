class Solution {
public:
    bool isPalindrome(string s) {
        string alph = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",ikinci,ters;

        for (int i = 0; i<s.length() ;i++)
        {
            for (int j = 0;j<alph.length();j++)
            {
                if (s[i] == alph[j])
                {
                    if (j>=36)
                    {
                        ikinci.push_back(alph[j-26]);
                    }
                    else{
                        ikinci.push_back(alph[j]);
                    }
                }
            }
        }

        for(int k = ikinci.length()-1 ; k>=0;k--)
        {
            ters.push_back(ikinci[k]);
        }

        return ikinci == ters;
    }
};