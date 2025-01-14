class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int size = nums.size();
        int evenCount = 0;
        int oddCount = 0;

        if(size <= 1) return 0;
        
        // making even indices smaller
        for(int i = 0; i < size; i += 2) {
            if(i == 0) {
                if(nums[i] >= nums[i+1]) {
                    evenCount += nums[i] - nums[i+1] + 1;
                }
            }
            else if(i == size-1) {
                if(nums[i] >= nums[i-1]) {
                    evenCount += nums[i] - nums[i-1] +  1;
                }
            }
            else {
                if(nums[i-1] <= nums[i] || nums[i+1] <= nums[i]) {
                    evenCount += nums[i] - min(nums[i-1], nums[i+1]) + 1;
                }
            }
        }

        // making odd indices smaller

        for(int i = 1; i < size; i += 2) {
            if(i == size-1) {
                if(nums[i] >= nums[i-1]) {
                    oddCount += nums[i] - nums[i-1] +1;
                }
            }
            else {
                if(nums[i] >= nums[i-1] || nums[i] >= nums[i+1]) {
                    oddCount += nums[i] - min(nums[i-1], nums[i+1]) + 1;
                }
            }
        }
        return min(evenCount, oddCount);
    }
};