class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());

        if(size == 0) {
            return 0;
        }

        int length = 1;
        int count = 1;

        for(int i = 0; i < size-1; i++) {
            if(nums[i]+1 == nums[i+1]) {
                count++;
            } 

            if(nums[i] == nums[i+1]) {
                count = count;
                continue;
            }

            if(count > length) {
                length = count;
            }

            if(nums[i]+1 != nums[i+1]) {
                count = 1;
            }
        }
        return length;
    }
};