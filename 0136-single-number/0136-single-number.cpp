class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        int temp = 0;

        for(int i = 0; i < size; i++) {
            temp = nums[i] ^ temp;
        }
        return temp;
    }
};