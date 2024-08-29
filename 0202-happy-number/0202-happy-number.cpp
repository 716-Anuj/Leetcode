class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        if(n == 2) return false;

        int sum = 0;

        while(n > 1) {
            while(n) {
                int temp = n % 10;
                sum += temp * temp;
                n /= 10;
            }

            if(sum == 1) return true;
            if(sum == 4) return false;

            n = sum;
            sum = 0;
        }
        return true;
    }
};