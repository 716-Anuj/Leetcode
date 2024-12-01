class Solution {
public:

    int editDistance(string word1, string word2, int l1, int l2, vector<vector<int>> &dp) {
        if(l1 == 0) return l2;
        if(l2 == 0) return l1;

        if(dp[l1][l2] != -1) return dp[l1][l2];

        if(word1[l1-1] == word2[l2-1]) {
            dp[l1][l2] = editDistance(word1, word2, l1-1, l2-1, dp);
        }

        else {
            dp[l1][l2] = 1 + min(editDistance(word1, word2, l1-1, l2, dp), min (editDistance(word1, word2, l1, l2-1, dp), editDistance(word1, word2, l1-1, l2-1, dp)));
        }
        return dp[l1][l2];
    }

    int minDistance(string word1, string word2) {
        int l1 = word1.size();
        int l2 = word2.size();

        vector<vector<int>> dp(l1+1, vector<int>(l2+1, -1));

        int result = editDistance(word1, word2, l1, l2, dp);
        return result;
    }
};