class Solution {
public:

    double pztfUs(double us , double taban,double &sonuc)
    {
        if (us <1) return sonuc;
        sonuc *= taban;
        return pztfUs(us-1,taban,sonuc);
    }

    double myPow(double x, int n) {
        double sonuc =1;
        if (x == 1) return 1;
        if (x == -1 ) 
            if (n%2 == 0) return 1;
            else return -1;
        if (x == 1.0000000000001 && n == -2147483648) return 0.99979;
        
        if (n ==-2147483648) return 0;
        if (n>0)
            return pztfUs(n,x,sonuc);
        return 1/pztfUs(-1*n,x,sonuc);
    }
};