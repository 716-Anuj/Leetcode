class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;

        if(nums[0] < nums[size-1]) ans++;

        for(int i = 1; i < size; i++) {
            if(nums[i-1] > nums[i]) ans++;
            if(ans > 1) return false;
        }

        return true;
    }
};