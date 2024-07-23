class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int maxIndex = 0;

        for(int i = 0; i < size; i++) {
            if(maxIndex >= i) {
                maxIndex = max(maxIndex, i + nums[i]);
            }
            else{
                return false;
            }
        }
        return true;
    }
};