class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double size = nums.size();
        double prod = 1;
        double maximum = INT_MIN;
        double count = 0;

        for(int i = 0; i < size; i++) {
            prod *= nums[i];
            maximum = max(maximum, prod);

            if(prod == 0){
                prod = 1;
            }
        }

        prod = 1;

        for(int i = size-1; i >= 0; i--) {
            prod *= nums[i];
            maximum = max(maximum, prod);

            if(prod == 0) {
                prod = 1;
            }
        }
        
        return maximum;   
    }
};