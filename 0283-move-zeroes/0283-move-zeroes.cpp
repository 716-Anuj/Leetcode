class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> arr;
        int count = 0;

        for(int i = 0; i < size; i++) {
            if(nums[i] != 0) {
                arr.push_back(nums[i]);
            } 
            else {
                count++;
            }
        }

        for(int i = 0; i < count; i++) {
            arr.push_back(0);   
        }

        for(int i = 0; i < size; i++) {
            nums[i] = arr[i];
        }
        
    }
};