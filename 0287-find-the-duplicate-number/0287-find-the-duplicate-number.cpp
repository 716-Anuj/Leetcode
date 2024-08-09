class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int freq[size+1];

        memset(freq, 0, sizeof(freq));

        for(int i = 0; i < size; i++) {
            freq[nums[i]]++;

            if(freq[nums[i]] > 1) {
                return nums[i];
            }
        }
        return 0;
    }
};