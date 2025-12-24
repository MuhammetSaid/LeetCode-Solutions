class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num>2147395600)
            return false;
        for (int i = 0 ; i<46341;i++)
            if (i*i == num)
                return true;
        if (num == 1 || num ==4)
            return true;
        return false;
    }
};