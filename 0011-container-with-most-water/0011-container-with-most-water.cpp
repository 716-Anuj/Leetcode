class Solution {
public:
    int maxArea(vector<int>& nums) {
        int size = nums.size();
        int left_height = 0;
        int right_height = size-1;
        int area = 0;

        while(left_height < right_height) {
            int current_area = min(nums[left_height], nums[right_height]) * (right_height -left_height);
            area = max(area, current_area);

            if(nums[left_height] < nums[right_height]) {
                left_height++;
            }
            else{
                right_height--;
            }
        }
        return area;
    }
};