class Solution {
public:

    void f(int index, vector<int> &nums, vector<vector<int>> &ans) {
        if(index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> unique;

        for(int j = index; j < nums.size(); j++) {
            if(unique.find(nums[j]) != unique.end()) continue;
            unique.insert(nums[j]);

            swap(nums[index], nums[j]);
            f(index+1, nums, ans);
            swap(nums[index], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        f(0, nums, ans);
        sort(nums.begin(), nums.end());
        return ans;
    }
};