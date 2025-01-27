class Solution {
public:
    int candy(vector<int>& ratings) {
        int size = ratings.size();
        int total = 0;
        vector<int> arr(size, 1);

        for(int i = 1; i < size; i++) {
            if(ratings[i] > ratings[i-1]) {
                arr[i] = arr[i-1] + 1;
            }
        }

        for(int i = size-2; i >= 0; i--) {
            if(ratings[i] > ratings[i+1]) {
                arr[i] = max(arr[i], arr[i+1] + 1);
            }
        }

        for(int i = 0; i < size; i++) {
            total += arr[i];
        }
        return total;
    }
};