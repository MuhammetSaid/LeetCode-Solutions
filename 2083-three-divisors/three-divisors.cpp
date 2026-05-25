class Solution {
public:
    bool isThree(int n) {
        if (n == 1) return false;
        int sqr = sqrt(n);

        if (sqr * sqr != n) return false;
        else {
            int i = 2;
            while (i < sqr) {
                if (sqr % i == 0) return false;
                i++;
            }
        }
        return true;
    }
};