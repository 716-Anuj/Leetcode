class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        int i = 0;
        int j = size-1;

//         for(int i = 0; i < size; i++) {
//             ans.push_back(nums[i] * nums[i]);
//         }

//         sort(ans.begin(),ans.end());
        
        while(i <= j) {
            if(abs(nums[i]) >= abs(nums[j])) {
                ans.push_back(nums[i] * nums[i]);
                i++;
            } 
            else {
                ans.push_back(nums[j] * nums[j]);
                j--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};