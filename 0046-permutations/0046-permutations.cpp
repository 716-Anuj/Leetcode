class Solution {
public:

    void f(int index, vector<int>&nums, vector<vector<int>>&ans) {
        if(index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for(int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            f(index+1, nums, ans);
            swap(nums[index], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(0, nums, ans);
        return ans;
    }
};