class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        vector<int> anss;
        int indx = 0, ctrl = 0;
        while (true) {
            unordered_map<char, int> gecici;
            for (int i = indx; i < s.size(); i++) {
                if (gecici.find(s[i]) != gecici.end()) {
                    anss.push_back(i-indx);
                    indx = gecici[s[i]] + 1;
                    break;
                } else {
                    gecici[s[i]] = i;
                    if (i == s.size()-1) {
                        ctrl = 1;
                        anss.push_back(s.size() - indx);
                    }
                }
            }
            if (ctrl == 1) break;
        }
        int max = anss[0];
        for (int i = 0; i < anss.size(); i++){
            if (anss[i] > max) max = anss[i];
        }
        return max;
    }
};