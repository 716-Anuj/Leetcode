class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        int maximum = INT_MIN;

        for(int i = 0; i < size; i++) {
            sum += nums[i];
            maximum = max(sum, maximum);
            if(sum < 0){
                sum = 0;
            }
        }
        return maximum;
    }
};