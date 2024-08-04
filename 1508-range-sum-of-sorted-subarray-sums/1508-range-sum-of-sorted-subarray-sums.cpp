class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int size = nums.size();
        vector<int> sum;
        long long newSum = 0;
        int sum1;
        int MOD = 1e9 + 7;

        for(int i = 0; i < size; i++) {
            sum1 = 0;
            for(int j = i; j < size; j++) {
                sum1 += nums[j];
                sum.push_back(sum1);
            }
        }

        sort(sum.begin(), sum.end());

        for(int i = left-1; i < right; i++) {
            newSum = (newSum + sum[i]) % MOD;
        }
        return newSum;

    }
};