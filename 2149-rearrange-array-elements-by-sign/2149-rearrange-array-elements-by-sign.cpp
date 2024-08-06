class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> positive;
        vector<int> negative;
        vector<int> result;

        for(int i = 0; i < size; i++) {
            if(nums[i] > 0) {
                positive.push_back(nums[i]);
            }
            else {
                negative.push_back(nums[i]);
            }
        }

        for(int i = 0; i < size/2; i++) {
            result.push_back(positive[i]);
            result.push_back(negative[i]);
            
        }
        return result;
    }
};