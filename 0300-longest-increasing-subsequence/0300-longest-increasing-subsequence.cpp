class Solution {
public:
    
    // const int N = 25e2+10;
    int dp[2505];

    int fun(int i, vector<int> &nums) {
        int ans = 1;
        if(dp[i] != -1) {
            return dp[i];
        }

        for(int j = 0; j < i; j++) {
            if(nums[i] > nums[j])
            ans = max(ans, fun(j, nums)+1);
        }

        return dp[i] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        memset(dp, -1, sizeof(dp));

        int ans = 0;
        for(int i = 0; i < size; i++) {
            ans = max(ans, fun(i, nums));
        }
        return ans;
    }
};