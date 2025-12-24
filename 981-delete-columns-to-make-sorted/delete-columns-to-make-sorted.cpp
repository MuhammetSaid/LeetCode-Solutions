class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int result = 0;
        for (int i = 0 ; i < strs[0].length() ; i++)
        {
            for (int j = 0; j < strs.size()-1; j++)
            {
                if (strs[j][i] > strs[j+1][i])
                {
                    result++;
                    break;
                }
            }
        }
        return result;
        
        
        
        
        
        
        
        // int result = 0;
        // vector<string> strs2;
        // for (int i = 0; i < strs[0].length(); i++)
        // {
        //     string gecici = "";
        //     for (int j = 0; j < strs.size(); j++)
        //         gecici += strs[j][i];
        //     strs2.push_back(gecici);
        // }
        // for (int i = 0; i < strs2.size(); i++)
        // {
        //     string ters = strs2[i];
        //     sort(ters.begin(), ters.end());
        //     if ( strs2[i] != ters )
        //         result++;
        // }
        // return result;
    }
};