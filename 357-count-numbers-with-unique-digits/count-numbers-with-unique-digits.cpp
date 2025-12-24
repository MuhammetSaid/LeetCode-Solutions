class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int> anss = {1};
        int result = 0;
        for (int i = 0 ; i < n-1; i++) {
            int gecici = 9, k = 9, sayac = 0;
            while (sayac-1 != i) {
                gecici *= k;
                k--;
                sayac++;
            }
            anss.push_back(gecici);
        }
        for (int i = 0 ; i < anss.size(); i++)
            result += anss[i];
        if (n > 0)
            result += 9;
        return result ;
    }
};