class Solution {
public:

    int f(vector<int> &nums, int ind, vector<int>& dp) {
        if(ind == 0) return nums[ind];
        if(ind < 0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int pick = nums[ind] + f(nums, ind-2, dp);
        int notpick = 0 + f(nums, ind-1, dp);

        return dp[ind] = max(pick, notpick);
    }

    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<int> dp(size, -1);

        return f(nums, size-1, dp);
    }
};