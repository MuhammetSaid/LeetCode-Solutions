class Solution {
public:
    string sortSentence(string s) {
        vector<int> aa;
        string ab;
        vector<string> ans;
        for (int i = 0 ; i<s.length() ; i++)
        {
            if (s[i] == ' ')
            {
                ab.pop_back();
                aa.push_back(s[i-1]);
                ans.push_back(ab);
                ab = "";
            }
            if (s[i] != ' ')
                ab.push_back(s[i]);
        }
        ab.pop_back();
        ans.push_back(ab);
        aa.push_back(s[s.length()-1]);
        int gecici;
        ab = "";
        for(int i = 0; i < aa.size()-1; i++)
        {
            for(int j = i+1; j < aa.size(); j++)
            {
                if(aa[j] < aa[i]){
                    gecici = aa[i];
                    aa[i] = aa[j];
                    aa[j] = gecici;

                    ab = ans[i];
                    ans[i] = ans[j];
                    ans[j] = ab;
                }
            }
        }
        ab ="";
        for (int i = 0 ;i<ans.size(); i++)
        {
            ab+=ans[i];
            ab+=' ';
        }
        ab.pop_back();
        return ab;
    }
};