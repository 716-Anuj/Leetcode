class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        double prod = 1;
        double result = INT_MIN;

        for(int i = 0; i < size; i++) {
            prod *= nums[i];
            result = max(result, prod);

            if(prod == 0) {
                prod = 1;
            }
        }

        prod = 1;

        for(int i = size-1; i >= 0; i--) {
            prod *= nums[i];
            result = max(result, prod);

            if(prod == 0) {
                prod = 1;
            }
        }
        return result;
    }
};