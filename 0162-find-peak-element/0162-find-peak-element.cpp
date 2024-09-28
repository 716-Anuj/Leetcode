class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        auto start = nums.begin();
        auto end = nums.end();

        auto large = max_element(start, end);
        return distance(start, large);
    }
};