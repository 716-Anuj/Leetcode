class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int arr[size];
        int result = 0;

        for(int i = 0; i < size; i++) {
            arr[i] = prices[i];
        }

        for(int i = size-1; i > 0; i--) {
            if(arr[i-1] < arr[i]) {
                arr[i-1] = arr[i];
            }
        }

        for(int i = 0; i < size; i++) {
            result = max(result, arr[i]-prices[i]);
        }
        return result;
    }
};