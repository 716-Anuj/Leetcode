class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();

        for(int i = 0; i < size-1; i++) {
            for(int j = 0; j < size-i-1; j++) {
                if(nums[j] > nums[j+1]) {
                    swap(nums[j+1], nums[j]);
                }
            }
        }
    }
};