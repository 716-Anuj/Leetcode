class Solution {
public:

    void solve(vector<int> nums, int size, vector<vector<int>> &ans, vector<int> output, int index) {
        if(index >= size) {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, size, ans, output, index+1);

        //include
        output.push_back(nums[index]);
        solve(nums, size, ans, output, index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> ans;
        vector<int> output;

        solve(nums, size, ans, output, 0);
        return ans;
    }
};