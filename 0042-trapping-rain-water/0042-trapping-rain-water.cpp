class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int arr[size];
        int arr1[size];
        int arr2[size];
        int result = 0;

        arr[size-1] = height[size-1];
        for(int i = size-1; i > 0; i--) {
            if(arr[i] < height[i-1]) {
                arr[i-1] = height[i-1];
            }
            else {
                arr[i-1] = arr[i];
            }
        }

        arr1[0] = height[0];
        for(int i = 0; i < size-1; i++) {
            if(arr1[i] < height[i+1]) {
                arr1[i+1] = height[i+1];
            }
            else {
                arr1[i+1] = arr1[i];
            }
        }

        for(int i = 0; i < size; i++) {
            arr2[i] = min(arr[i], arr1[i]);
        }

        for(int i = 0; i < size; i++) {
            result += abs(height[i]-arr2[i]);
        }
        return result;

    }
};