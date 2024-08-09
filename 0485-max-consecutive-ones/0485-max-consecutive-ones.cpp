class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        int result = 0;

        for(int i = 0; i < size; i++) {
            if(nums[i] == 1) {
                count++;
                result = max(result, count);
            }
            else {
                count = 0;
            }
        }
        return result;
    }
};