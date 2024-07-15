class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        unordered_set<int> s;

        for(int i = 0 ; i < size; i++){
            if(s.count(nums[i]) > 0){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};