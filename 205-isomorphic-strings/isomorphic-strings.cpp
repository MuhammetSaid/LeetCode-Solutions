class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> dick, dick2;
        string gecici = "";
        for (int i = 0; i < s.length(); i++) {
            auto it = dick.find(s[i]);
            if (it != dick.end()) {
                gecici += it -> second;
            } else {
                dick[s[i]] = t[i];
                gecici += t[i];
            }
        }
        if (gecici != t) return false;
        gecici = "";
        for (int i = 0; i < t.length(); i++) {
            auto it = dick2.find(t[i]);
            if (it != dick2.end()) {
                gecici += it -> second;
            } else {
                dick2[t[i]] = s[i];
                gecici += s[i];
            }
        }
        if (gecici != s) return false;
        return true;
    }
};