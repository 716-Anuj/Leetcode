class Solution {
public:

    int digit(int num) {
        if(num >= 0 && num <= 9) {
            return num;
        }

        int sum = 0;
        int rem = 0;

        while(num != 0) {
            rem = num%10;
            sum += rem;
            num /= 10;
        }
        return digit(sum);
    }

    int addDigits(int num) {
        return digit(num);
    }
};