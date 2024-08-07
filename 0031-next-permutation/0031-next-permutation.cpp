class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int i = size-1;

        for(; i > 0; i--) {
            if(nums[i-1] < nums[i]) {
                break;
            }
        }

        if(i == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }

        int j = size-1;

        for(; j >= i; j--) {
            if(nums[i-1] < nums[j]) break;
        }

        swap(nums[i-1], nums[j]);
        reverse(nums.begin()+i, nums.end());
    }
};