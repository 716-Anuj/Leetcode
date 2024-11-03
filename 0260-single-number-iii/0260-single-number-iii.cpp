class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int size = nums.size();
        int temp1;
        int temp2;

        unordered_map<int, int> mp;

        for(int a : nums) {
            mp[a]++;
        }

        int k = 0;
        int flag = 0;

        for(int i = 0; i < size; i++) {
            if(k == 2) break;

            if(mp[nums[i]] == 1) {
                if(flag == 0) {
                    flag = 1;
                    temp1 = nums[i];
                }
                else{
                    temp2 = nums[i];
                }
                k++;
            }
        }
        return {temp1, temp2};
    }
};