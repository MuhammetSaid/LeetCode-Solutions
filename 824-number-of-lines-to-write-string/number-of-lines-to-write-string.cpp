class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        if (s.length() == 0)
            return {0,0};
        char alph[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        int ctrl = 0;
        vector<int> ans = {1,0};
        for (int i = 0 ; i < s.length() ; i++)
        {
            int gecici = 0;
            for (int j = 0 ; j < 26 ; j++)
            {
                if (s[i] == alph[j])
                {
                    gecici = widths[j];
                    ctrl += widths[j];
                    break;
                }
            }
            if (ctrl > 100)
            {
                ans[0] += 1;
                ctrl = gecici;
            }

        }
        ans[1] = ctrl;
        return ans;
    }
};