class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int size = prices.size();
        int arr[size];

        for(int i = 0; i < size; i++){
            arr[i] = prices[i];
        }

        for(int i = size-1; i > 0; i--){
            if(prices[i-1] < prices[i]){
                prices[i-1] = prices[i];
            }
        }

        for(int i = 0; i < size; i++){
            if(max < prices[i]-arr[i]){
                max = prices[i]-arr[i];
            }
        }
        return max;
    }
};