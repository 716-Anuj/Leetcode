class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int len = 1;
        int count = 1;

        int size = nums.size();

        if(size == 0)
        return 0;

        for(int i = 0; i < size-1; i++)
        {
            if(nums[i]+1 == nums[i+1])
            {
                count++;
            }
            else if(nums[i] == nums[i+1])
            {
                count = count;
            }
            else{
                count = 1;
            }
            if(count > len)
            {
                len = count;
            }
            
        }
        return len;
    }
};