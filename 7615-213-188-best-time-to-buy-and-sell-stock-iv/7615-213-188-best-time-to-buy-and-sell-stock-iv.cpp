class Solution {
public:

    int ans(int index, int buy, int cnt, int n, vector<int>&prices, vector<vector<vector<int>>> &dp) {
        if(index == n) {
            return 0;
        }

        if(cnt == 0) {
            return 0;
        }

        if(dp[index][buy][cnt] != -1) return dp[index][buy][cnt];

        int profit = 0;

        if(buy) {
            int pick = ans(index+1, false, cnt, n, prices, dp) - prices[index];
            int notPick = 0 + ans(index+1, true, cnt, n, prices, dp);
            profit = max(pick, notPick);
        }
        else {
            int pick = ans(index+1, true, cnt-1, n, prices, dp) + prices[index];
            int notPick = 0 + ans(index+1, false, cnt, n, prices, dp);
            profit = max(pick, notPick);
        }

        return dp[index][buy][cnt] = profit;
    }

    int maxProfit(int k, vector<int>& prices) {
        int size = prices.size();
        vector<vector<vector<int>>> dp(size, vector<vector<int>>(2, vector<int>(k+1, -1)));
        return ans(0, true, k, size, prices, dp);
    }
};