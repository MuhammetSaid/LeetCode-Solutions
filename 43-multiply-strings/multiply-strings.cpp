class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        vector<string> anss;
        int aa, sayac = 0;
        string anns, result = "";
        for (int i = num1.length() - 1; i >= 0; i--) {
            string num1Char = "";
            num1Char += num1[i];
            int num1Int = stoi(num1Char), carry = 0;
            
            for (int j = num2.length() - 1; j >= 0; j--) {
                string num2Char = "";
                num2Char += num2[j];
                int num2Int = stoi(num2Char);
                int resultInt = (num1Int * num2Int) + carry;
                if (resultInt > 9) {
                    result += to_string(resultInt % 10);
                    carry = resultInt / 10;
                } else {
                    result += to_string(resultInt);
                    carry = 0;
                }
            }
            if (carry) result += to_string(carry);
            anss.push_back(result);
            sayac++;
            result = "";
            for (int j = 0; j < sayac; j++) {
                result += '0';
            }
        }
        
        result = "";
        int carry = 0;
        for (int i = 0; i < anss[anss.size()-1].length(); i++) {
            int resultGecici = 0;
            for (int j = 0; j<anss.size(); j++) {
                int x;
                if (i > anss[j].size()-1) x = 0;
                else{
                    string geciciToplama = "";
                    geciciToplama+= anss[j][i];
                    x = stoi(geciciToplama);
                }
                resultGecici += x;
            }
            if (resultGecici + carry > 9) {
                result += to_string((resultGecici + carry)%10);
                carry = (resultGecici + carry)/10;
            }
            else {
                result += to_string(resultGecici + carry);
                carry = 0;
            }
        }
        if (carry > 0) result += to_string(carry);
        reverse(result.begin(), result.end());
        return result;
    }
};