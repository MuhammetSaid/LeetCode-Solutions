class Solution {
public:
    string addStrings(string num1, string num2) {
        int elde = 0;
        if (num1.length() < num2.length()) {
            string temp = num2;
            num2 = num1;
            num1 = temp;
        }
        string gecici = "";
        for (int i = 0; i < num1.length() - num2.length(); i++) gecici += '0';
        for (int i = 0; i < num2.length(); i++) gecici += num2[i];
        num2 = gecici;
        string ans = "";

        for (int i = num1.length() -1; i >= 0; i--) {
            gecici = "";
            gecici += num1[i];
            int num1_i = stoi(gecici);
            gecici = "";
            gecici += num2[i];
            int num2_i = stoi(gecici);
            int toplam = elde + num1_i + num2_i;
            if (toplam > 9) {
                elde = toplam / 10;
                ans += to_string(toplam % 10);
            } else {
                elde = 0;
                ans += to_string(toplam);
            }
        }
        if (elde != 0) ans += to_string(elde);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};