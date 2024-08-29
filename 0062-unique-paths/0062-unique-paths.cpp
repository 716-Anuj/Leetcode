class Solution {
public:

    int f(int m, int n, vector<vector<int>>&dp) {
        if(m == 0) return 1;
        if(n == 0) return 1;

        if(dp[m][n] != -1) return dp[m][n];

        int right = f(m, n-1, dp);
        int left = f(m-1, n, dp);

        return dp[m][n] = right + left;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return f(m-1, n-1, dp);
    }
};