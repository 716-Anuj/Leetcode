class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();

        for(int i = 0; i < size; i++) {
            int mx = INT_MIN;
            for(int j = i+1; j < size; j++) {
                if(arr[j] > mx) {
                    mx = arr[j];
                }
            }
            arr[i] = mx;
        }
        arr[size-1] = -1;
        return arr;
    }
};