class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) return true;

        while (n > 1)
        {
            if (n%2 == 0)
                n /=2;
            else 
                n =0;
        }
        
        return n == 1;
    }
};