class Solution {
public:
    int maxArea(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        int j = size-1;

        int ans = 0;

        while(i < j) {
            if(ans < min(nums[i], nums[j]) * (abs(i-j))) {
                ans = min(nums[i], nums[j]) * (abs(i-j));
            }
            if(nums[i] >= nums[j]) {
                j--;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};