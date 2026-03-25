class Solution {
public:

    int index(char x, int y) {
        string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if (x == alph[y]) return y + 1;
        return index(x, y + 1);
    }

    int titleToNumber(string columnTitle) {
        int sayac = 0, ans = 0;
        for (int i = columnTitle.length() - 1; i >= 0; i--) {
            int konum = index(columnTitle[i], 0);
            ans += (pow(26, sayac) * konum);
            sayac++;
        }
        return ans;
    }
};