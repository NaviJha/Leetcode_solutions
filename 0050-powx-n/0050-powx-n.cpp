class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        
        // Handle negative power: x^(-n) = (1/x)^n
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double res = 1;
        //x %= MOD;
        while (N > 0) {
            if (N % 2 == 1) res = (res * x);
            x = (x * x) ;
            N /= 2;
        }
        return res;
    }
};