class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;

        for(int i = 0; i < size; i++) {
            sum += nums[i];
        }

        int left = 0;

        for(int i = 0; i < size; i++) {
            int right = sum -left - nums[i];

            if(right == left) return i;

            left += nums[i];
        }
        return -1;
    }
};