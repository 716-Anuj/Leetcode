class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int size = nums.size();
        int closest = INT_MAX;
        int ans;

        sort(nums.begin(), nums.end());

        for(int i = size-1; i >= 0; i--) {
            if(abs(nums[i]) < closest) {
                closest = abs(nums[i]);
                ans = nums[i];
            }

        }
        return ans;
    }
};