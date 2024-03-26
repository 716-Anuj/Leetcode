class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int size = nums.size();
    int prod = 1, left = 0, right = 0;
    int largest = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        prod = prod * nums[i];
        if(prod >= largest)
        {
            largest = prod;
        }
        if(prod == 0)
        {
            prod = 1;
        }
    }

    prod = 1;

    for(int i = size-1; i >= 0;i--)
    {
        prod = prod * nums[i];
        if(prod >= largest)
        {
            largest = prod;
        }
        if(prod == 0)
        {
            prod = 1;
        }
    }

    return largest;
    }
};