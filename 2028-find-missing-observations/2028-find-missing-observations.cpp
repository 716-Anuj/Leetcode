class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int size = n+m;
        int mSum = 0;

        for(int i = 0; i < m; i++) {
            mSum += rolls[i];
        }

        int nSum = size * mean - mSum;

        vector<int> ans(n);
        if(nSum/n > 6 || nSum/n <= 0) return {};
        if(nSum/n == 6 && nSum%n > 0) return {};

        for(int i = 0; i < n; i++) {
            ans[i] = nSum/n;
        }

        for(int i = 0; i < nSum%n; i++) {
            ans[i]++;
        }
        return ans;
    }
};