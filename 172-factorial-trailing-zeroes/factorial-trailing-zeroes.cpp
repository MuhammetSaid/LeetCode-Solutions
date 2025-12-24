class Solution {
public:
    int trailingZeroes(int n) {
        int sayac = 0,sayac2 = 0,a = 1,aa =1; 
        if (n == 0) return 0;
        while (aa<=n)
        {
            aa *= 5;
            sayac2++;
        }
        for (int i = 0;i<sayac2;i++)
        {
            a*=5;
            sayac+=n/a;
        }
        return sayac;
    }
};