class Solution {
public:
    int maxJump(vector<int>& stones) {
        int size = stones.size();
        int res = stones[1];

        for(int i = 2; i < size; i++) {
            res = max(res, stones[i] - stones[i-2]);
        }

        return res;
    }
};