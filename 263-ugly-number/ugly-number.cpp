class Solution {
public:
    bool isUgly(int n) {
        if (!n) return false;
        int a = 2;
        for (int i = 0; i < 3; i++) {
            while (n % a == 0) {
                n = n / a;
            }
            if (i == 0) a = 3;
            else a = 5;
        }
        return n == 1 ? true : false;
    }
};