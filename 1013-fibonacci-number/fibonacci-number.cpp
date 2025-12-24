class Solution {
public:
    int fib(int n) {
       int birin = 0,ikin = 1,aa;
       aa = birin + ikin;
       for (int i = 2; i <= n ; i++) 
       {
           aa= birin + ikin;
           birin = ikin;
           ikin = aa;
       }
       if (n==0)
        return 0;
       return aa;
    }
};