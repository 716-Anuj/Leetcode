class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        // vector<int>arr(nums.size());

        // for(int i = 0; i < sizeof(nums); i++){
        //     arr[i] = nums[i];
        // }
        // return arr;
        return nums;
    }
};