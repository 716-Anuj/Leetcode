class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        int start = 0, end = size-1;

        while(start < end) {
            int mid = start + (end-start)/2;

            if(mid%2 == 1) mid = mid-1;

            if(nums[mid] == nums[mid+1]) {
                start = start + 2;
            }
            else {
                end = mid;
            }
        }
        return nums[start];
    }
};