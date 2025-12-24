class Solution {
public:
    string reverseWords(string s) {
        vector<string> yeni; 
        string gecici = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') gecici += s[i];
            else {
                if (gecici != "") yeni.push_back(gecici);
                gecici = "";
            }
        }
        if (gecici != "") yeni.push_back(gecici);
        gecici = "";
        for (int i = yeni.size()-1; i >= 0; i--) {
            gecici += yeni[i];
            if (i != 0) gecici += ' ';
        }
        return gecici;
    }
};