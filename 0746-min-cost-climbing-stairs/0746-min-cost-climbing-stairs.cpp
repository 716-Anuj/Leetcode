class Solution {
public:

    int minCost(int size, vector<int> &cost, vector<int>&dp) {
        if(size < 0) {
            return 0;
        }
        if(dp[size] != -1) return dp[size];

        if(size == 0 || size == 1) return dp[size] = cost[size];
        return dp[size] = cost[size] + min(minCost(size-1, cost, dp), minCost(size-2, cost, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector<int>dp(size, -1);
        return min(minCost(size-1, cost, dp), minCost(size-2, cost, dp));
    }
};