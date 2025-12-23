class Solution {
public:
    string convert(string s, int numRows) {
        vector<int> keys;
        int i = 0;
        string ans = "";
        int ctrl = 0;
        while (true) {
            for (int i = 1; i <= numRows; i++) {
                if (keys.size() < s.size()) {
                    keys.push_back(i);
                } else {
                    ctrl = 1;
                    break;
                }
            }
            for (int i = numRows - 1; i > 1; i--) {
                if (keys.size() < s.size()) {
                    keys.push_back(i);
                } else {
                    ctrl = 1;
                    break;
                }
            }
            if (ctrl == 1) break;
        }
        
        for (int i = 1; i <= numRows; i++) {
            for (int j = 0; j < keys.size(); j++) {
                if (keys[j] == i) {
                    ans += s[j];
                }
            }
        }
        return ans;
    }
};