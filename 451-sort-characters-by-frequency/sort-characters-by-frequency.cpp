class Solution {
public:
    string frequencySort(string s) {
        vector<string> aa;
        vector<int> an;
        sort(s.begin(),s.end());
        string ar;
        for (int i = 0 ; i<s.length(); i++)
        {
            if(i == s.size()-1)
            {
                if(s[i] == s[i-1])
                    ar.push_back(s[i]);
                else
                {
                    ar.push_back(s[i]);
                    aa.push_back(ar);
                    ar = "";
                }
            }
            else
            {
                if (s[i] == s[i+1])
                    ar.push_back(s[i]);
                else
                {
                    ar.push_back(s[i]);
                    aa.push_back(ar);
                    ar = "";
                }
            }
        }
        if(ar != "")
            aa.push_back(ar);
        ar = "";
        for (int i = 0 ; i<aa.size() ; i++)
            an.push_back(aa[i].length());
        int gecici;
        string temp;
        for(int i = 0; i <an.size()-1; i++)
        {
            for(int j = i+1; j < an.size(); j++)
            {
                if(an[j] >= an[i]){
                    gecici = an[i];
                    an[i] = an[j];
                    an[j] = gecici;

                    temp = aa[i];
                    aa[i] = aa[j];
                    aa[j] = temp;
                }
            }
        }
        for (int i = 0 ; i<aa.size();i++)
            ar += aa[i];
        return ar;
    }
};