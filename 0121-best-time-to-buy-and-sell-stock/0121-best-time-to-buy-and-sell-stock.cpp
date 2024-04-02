class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int left = 0;
        int right = 1;
        int result = 0;

        while(right < size)
        {
            if(prices[left] < prices[right])
            {
            result = max(result, prices[right] - prices[left]);
            }
            else{
                left = right;
            }

            right++;
        }

        return result;

        // for(int i = 0; i < size-1; i++)
        // {
        //     for(int j = i+1; j < size; j++)
        //     {
        //         if(prices[j]-prices[i] > max)
        //         max = prices[j]-prices[i];
        //     }
        // }
        // return max;


    }
};