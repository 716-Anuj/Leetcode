class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int n = num;
        
        for(int i = 0; i <= num; i++) {
            int sum = 0, temp = i;
            while(temp > 0) {
                sum = sum*10 + temp%10;
                temp /= 10;
            }
            if(sum + i == n) return true;
        }
        return false;
    }
};