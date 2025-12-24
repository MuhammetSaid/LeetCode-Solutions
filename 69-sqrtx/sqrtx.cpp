class Solution {
public:
    int mySqrt(int x) {
        double a, b = 1;
        while (true) {
            a = b - (((b*b)-x) / (2*b));
            int c = a-b;
            if (c < 0)
                c = -c;
            if (c < 0.0000001)
                break;
            b = a;
        }
        return floor(a);
    }
};