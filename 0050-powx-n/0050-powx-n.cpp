class Solution {
public:
    double power(double x, long n) {
        if(n == 1) {
            return x;
        }
        if(n == 0) {
            return 1;
        }

        double half = power(x, n/2);

        if(n%2 == 0) {
            return half * half;
        }
        else {
            return half * half * x;
        }
    }

    double myPow(double x, int n) {
        long N = (long)n;
        if(n < 0) return 1.0/power(x, -N);
        else return power(x, N);
    }
};