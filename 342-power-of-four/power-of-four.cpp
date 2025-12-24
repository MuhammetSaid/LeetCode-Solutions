class Solution {
public:
    bool isPowerOfFour(int n) {
        int kontrol = 0;
        if (n<0 ||n ==0 )
            return false;
        while (n >1)
        {
            if (n%4 == 0 )
                n /=4;
            else 
            {
                kontrol = 1;
                break; 
            }
        }
        return kontrol == 0;
    }
};