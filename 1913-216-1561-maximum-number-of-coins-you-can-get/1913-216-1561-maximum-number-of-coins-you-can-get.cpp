class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int ans = 0;
        int start = n-2;
        int end = n/3;

        while(start >= end) {
            ans += piles[start];
            start -= 2;
        }
        return ans;
    }
};