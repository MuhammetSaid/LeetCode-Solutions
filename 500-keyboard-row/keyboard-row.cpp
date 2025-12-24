class Solution {
public:

    int bul(string birin,string ikin , string ucun,int n,char aranan)
    {
        if (birin[n] == aranan)
            return 1;
        else if (ikin[n] == aranan)
            return 2;
        else if (ucun[n] == aranan)
            return 3;
        return bul(birin,ikin,ucun,n+1,aranan);
    }

    vector<string> findWords(vector<string>& words) {
        int durum1 = 0,k,m =0;
        vector<string> ans;
        string nee;
        string birs = "qwertyuiopQWERTYUIOP";
        string ikis = "ASDFGHJKLasdfghjkl22";
        string ucus = "zxcvbnmZXCVBNM345678";

        for (int i = 0 ; i<words.size();i++)
        {
            k = bul(birs,ikis,ucus,m,words[i][0]);
            for (int j = 0 ; j<words[i].length();j++)
            {
                if (bul(birs,ikis,ucus,m,words[i][j]) != k)
                {
                    durum1 = 1;
                }
            }
            if (durum1 == 0)
                ans.push_back(words[i]);

            durum1 = 0;
        }

        return ans;
    }
};