class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;

        for(int i = 0; i < size; i++) {
            ans.push_back(nums[i] * nums[i]);
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};