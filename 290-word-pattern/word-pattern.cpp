class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> dick;
        unordered_map<string, char> dick2;
        vector<string> gecici;
        string a = "";
        s += ' ';
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                gecici.push_back(a);
                a = "";
            } else {
                a += s[i];
            }
        }
        a = "";
        if (gecici.size() != pattern.length()) return false;
        for (int i = 0; i < pattern.size(); i++) {
            auto it = dick.find(pattern[i]);
            if (it != dick.end()) {
                a += it->second;
                a += ' ';
            } else {
                dick[pattern[i]] = gecici[i];
                a += gecici[i];
                a += ' ';
            }
        }
        if (s != a) return false;
        a = "";
        for (int i = 0; i < gecici.size(); i++) {
            auto it = dick2.find(gecici[i]);
            if (it != dick2.end()) {
                a += it->second;
            } else {
                dick2[gecici[i]] = pattern[i];
                a += pattern[i];
            }
        }
        if (a != pattern) return false;
        return true;
    }
};