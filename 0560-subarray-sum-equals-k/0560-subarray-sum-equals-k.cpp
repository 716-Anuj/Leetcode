class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        int pointer1 = 0;
        int pointer2;
        int count = 0;
        int sum = 0;
        
        while(pointer1 < size) {
            pointer2 = pointer1;
            sum = 0;
            for(int i = pointer2; i < size; i++) {
                sum += nums[i];
                if(sum == k) {
                    count++;
                    // break;
                }
                // if(sum > k) {
                //     break;
                // }
            }
            pointer1++;
        }
        return count;
    }
};