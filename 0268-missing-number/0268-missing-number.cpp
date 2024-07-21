class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int k;

        for(int i = 0; i < size; i++) {
            if(nums[i] != i) {
                return i;
            }
            k = i;
        }
        return k+1;
    }
};