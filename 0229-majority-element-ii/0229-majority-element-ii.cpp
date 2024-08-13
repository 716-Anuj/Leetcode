class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> result;
        int count = 1;

        if(size == 1) {
            return nums;
        }

        if(size == 2 && nums[size-1] == nums[size-2]) {
            result.push_back(nums[size-1]);
            return result;
        }

        if(size < 3) {
            for(int i = 0; i < size-1; i++) {
                if(nums[i]!= nums[i+1]) {
                    result.push_back(nums[i]);
                }
            }

            if(nums[size-1] != nums[size-2]) {
                result.push_back(nums[size-1]);
            }

            return result;
        }

        for(int i = 0; i < size-1; i++) {
            if(nums[i] != nums[i+1]) {
                count = 1;
            } else {
                count++;
            }
            
            if(count == size/3+1) {
                result.push_back(nums[i]);
            }

        }
        return result;
    }
};