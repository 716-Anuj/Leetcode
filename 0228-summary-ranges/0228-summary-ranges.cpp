class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int size = nums.size();

        if (size == 0) return ans;

        int start = 0; 

        for (int i = 1; i <= size; i++) {
            if (i == size || nums[i] != nums[i-1] + 1) {
                string range = to_string(nums[start]);
                if (start != i - 1) {
                    range += "->" + to_string(nums[i - 1]);
                }
                ans.push_back(range);
                start = i; 
            }
        }

        return ans;
    }
};
