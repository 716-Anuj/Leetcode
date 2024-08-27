class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;

        int mid = (int)sqrt(num);
        int sum = 1;

        for(int i = 2; i <= mid; i++) {
            if(num % i == 0) {
                sum += i;
                sum += num/i;
            }
        }
        return num == sum;
    }
};