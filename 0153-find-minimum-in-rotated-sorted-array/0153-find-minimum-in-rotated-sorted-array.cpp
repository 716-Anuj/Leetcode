class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int start = 0;
        int end = size-1;

        if(size == 1) {
            return nums[0];
        }

        while(start <= end) {
            if(nums[start] > nums[start+1]) {
                return nums[start+1];
            }
            else {
                start++;
            }

            if(nums[end] < nums[end-1]) {
                return nums[end];
            }
            else {
                end--;
            }
        }
        return nums[0];
    }
};