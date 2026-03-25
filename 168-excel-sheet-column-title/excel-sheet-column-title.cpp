class Solution {
public:
    string convertToTitle(int columnNumber) {
        string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", ans = "";
        while (columnNumber != 0) {
            columnNumber -= 1;
            int gecici = columnNumber % 26;
            ans += alph[gecici];
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};