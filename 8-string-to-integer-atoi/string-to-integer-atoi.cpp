class Solution {
public:
    int myAtoi(string s) {
        // Boşlukları Kaldırma (Delete Spaces)
        int i = 0;
        while (s[i] == ' ') i++;
        // işaret belirleme 
        int isNegative = 0;
        if (s[i] == '+') {
            i++;
        }
        else if (s[i] == '-') {
            isNegative = 1;
            i++;
        }
        if (!isdigit(s[i])) return 0;

        // çevirilecek rakamları tutma
        string digits = "";

        // Baştaki sıfırları kaldırma ve tanınmayan bir karaktere kadar ilerleme
        int ctrl = 0;
        for (int j = i; j < s.size(); j++) {
            if (!isdigit(s[j])) break;
            else if (ctrl == 0 && s[j] == '0') {
                continue;
            } else if (isdigit(s[j])) {
                digits+=s[j];
                ctrl = 1;
            }
        }

        // eğer int değerinden büyükse direk ele
        if (digits.length() > 10) return isNegative ? INT_MIN : INT_MAX;

        // sayıya dönüştürme
        int k = 1, ans = 0;
        for (int j = digits.length()-1; j >= 0; j--) {
            string gecici = "";
            gecici += digits[j];
            if (!(digits.length() == 10 && j == 0)){
                ans += (stoi(gecici) * k);
                k *= 10;
            }
        }
        if (digits.length() == 10 && !isNegative) {
            if (INT_MAX - ans < 2000000000 && digits[0] != '1') return INT_MAX;
            else {
                string gecici = "";
                gecici += digits[0];
                ans += (stoi(gecici) * k);
            }
        } if (digits.length() == 10 && isNegative) {
            if (INT_MIN + ans >= -2000000000 && digits[0] != '1') return INT_MIN;
            else {
                string gecici = "";
                gecici += digits[0];
                ans = -ans;
                ans -= (stoi(gecici) * k);
                return ans;
            }
        }



        return isNegative ? -ans : ans;
    }
};













// int i = 0, isNegative = 0;
//         string digits = "";
//         while (s[i] == ' ') i++;
//         if (s[i] == '-') {
//             isNegative = 1;
//             i++;
//         }
//         else if (s[i] == '+') i++;
//         else if (!isdigit(s[i])) return 0;
//         for (int j = i; j < s.size(); j++) {
//             if (isdigit(s[j])) digits += s[j];
//             else break;
//         }
//         if (digits.length() == 0) return 0;
//         if (isNegative == 1 && digits.length() > 10) return INT_MIN;
//         if (isNegative == 0 && digits.length() > 10) return INT_MAX;
//         i = digits.length() - 1;
//         int ans = 0, a = 1;
//         for (int j = i; j >= 1; j--) {
//             string gecici = "";
//             gecici += digits[j];
//             ans += (stoi(gecici) * a);
//             a *= 10;
//         }
//         string gecici = "";
//         gecici += digits[0];
//         if (stoi(gecici) == 1 && digits.length() == 10 || digits.length() == 10 && stoi(gecici) == 2 && INT_MIN - ans >= 2000000) {
//             ans += (stoi(gecici)) * a;
//         } else if (digits.length() != 10) {
//             ans += (stoi(gecici)) * a;
//         } else {
            
//             return isNegative ? INT_MIN : INT_MAX;
//         }

//         return isNegative ? -ans : ans;