class Solution {
public:
    int integerBreak(int n) {
        int sayac = 0 ;
        if (n == 2 ) return 1;
        if (n == 3 ) return 2;
        while (n > 2) {
            sayac++;
            n -= 3;
        }
        if (n == 1)
            return pow(3,sayac-1)*4;
        else if (n == 2)
            return pow(3,sayac)*2;
        return pow(3,sayac);
    }
};