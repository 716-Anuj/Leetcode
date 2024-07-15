class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int prod = 1;
        int flag = 0;
        int count = 0;
        
        for(int i = 0; i < size; i++){
            if(nums[i] != 0){
                prod *= nums[i];
            } 
            else{
                flag = 1;
            }

            if(nums[i] == 0){
                count++;
            }
        }

        if(count > 1){
            for(int i = 0; i < size; i++){
                nums[i] = 0;
            }
            return nums;
        }

        for(int i = 0; i < size; i++){
            if(flag == 1 && nums[i] != 0){
                nums[i] = 0;
            } 
            else if(flag == 1 && nums[i] == 0){
                nums[i] = prod;
            }
            else{
                nums[i] = prod/nums[i];
            }
        }
        return nums;
    }
};