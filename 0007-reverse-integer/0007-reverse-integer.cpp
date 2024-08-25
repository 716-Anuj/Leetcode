class Solution {
public:
    int reverse(int x) {
        long temp = x;
        long ans = 0;

        temp = x;
        temp = abs(temp);

        while(temp) {
            ans *= 10;
            ans += temp%10;
            temp /= 10;
        }

        if(x < 0) {
            if(ans >= INT_MAX || ans <= INT_MIN) return 0;
            return -ans;
        }

        if(ans >= INT_MAX || ans <= INT_MIN) return 0;
        return ans;

    }
};