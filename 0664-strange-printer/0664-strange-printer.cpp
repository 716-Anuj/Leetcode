class Solution {
public:

    int f(int i, int j, vector<vector<int>>&dp, string &s) {
        if(i == j) return 1;
        if(dp[i][j] != -1) return dp[i][j];

        int turn = INT_MAX;

        for(int k = i; k < j; k++) {
            turn = min(f(i, k, dp, s)+f(k+1, j, dp, s), turn);
        }
        return dp[i][j] = (s[i] == s[j]) ? turn-1 : turn;
    }

    int strangePrinter(string s) {
        int size = s.length();
        vector<vector<int>> dp(size, vector<int>(size, -1));
        return f(0, size-1, dp, s);
    }
};