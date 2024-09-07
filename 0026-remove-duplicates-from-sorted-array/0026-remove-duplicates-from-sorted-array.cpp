class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        nums.clear();

        nums.assign(s.begin(), s.end());
        return s.size();
    }
};