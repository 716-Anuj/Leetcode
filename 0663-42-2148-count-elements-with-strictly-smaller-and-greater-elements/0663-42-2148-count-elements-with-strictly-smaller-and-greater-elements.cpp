class Solution {
public:
    int countElements(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> arr;

        arr.push_back(nums[0]);
        arr.push_back(nums[size-1]);

        for(int i = 0; i < size; i++) {
            if(nums[i] != nums[0] && nums[i] != nums[size-1]) {
                arr.push_back(nums[i]);
            }
        }
        return arr.size()-2;
    }
};