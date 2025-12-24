class Solution {
public:
    int arrangeCoins(int n) {
        if (n == 1 ) return 1;
        double a = 0,i = 0;
        while (a<=n)
        {
            i++;
            a=a+i;
        }
        return i-1;
    }
};