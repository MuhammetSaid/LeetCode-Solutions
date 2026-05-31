class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, char> roman = {
            {1, 'I'},
            {5, 'V'},
            {10, 'X'}, 
            {50, 'L'},
            {100, 'C'},
            {500, 'D'},
            {1000, 'M'}
        };
        string ans = "";
        int sayac = 1;
        while (num > 0) {
            int a = num % 10;
            if (a < 4) {
                for (int i = 0; i < a; i++) {
                    ans += roman[sayac*1];
                }
            } else if (a == 4) {
                ans += roman[sayac*5];
                ans += roman[sayac*1];
            } else if (a < 9) {
                for (int i = 5; i < a; i++) {
                    ans += roman[sayac*1];
                }
                ans += roman[sayac*5];
            } else {
                ans += roman[sayac * 10];
                ans += roman[sayac * 1];
            }
            sayac *= 10;
            num /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};